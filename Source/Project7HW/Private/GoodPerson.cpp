#include "GoodPerson.h"
#include "SpartaPlayerController.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"

AGoodPerson::AGoodPerson()
{
    PrimaryActorTick.bCanEverTick = true;

    CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
    RootComponent = CapsuleComp;
    CapsuleComp->InitCapsuleSize(40.f, 92.f);
    CapsuleComp->SetSimulatePhysics(false);

    MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
    MeshComp->SetupAttachment(CapsuleComp);
    MeshComp->SetSimulatePhysics(false);

    // SpringArm 설정
    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
    SpringArmComp->SetupAttachment(CapsuleComp);
    SpringArmComp->TargetArmLength = 300.0f;  // 카메라와 캐릭터 사이 거리
    SpringArmComp->bUsePawnControlRotation = false;  // 카메라가 회전하지 않도록 설정
    SpringArmComp->bDoCollisionTest = false;  // 충돌 테스트를 비활성화해서 카메라가 벽에 막히지 않도록

    CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    CameraComp->SetupAttachment(SpringArmComp);

    MovementInput = FVector2D::ZeroVector;
    LookInput = FVector2D::ZeroVector;
    Velocity = FVector::ZeroVector;

    // 캐릭터 회전은 카메라 회전 방향을 따르지 않도록 설정
    bUseControllerRotationYaw = false;  // 카메라 회전 방향을 따르지 않도록 설정
    bUseControllerRotationPitch = false;  // 카메라는 pitch를 따라가지 않도록 설정
    bUseControllerRotationRoll = false;   // 카메라는 roll을 따라가지 않도록 설정
}

void AGoodPerson::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 카메라의 Yaw 값만 유지 (회전된 상태에서 카메라 뒤쪽을 계속 볼 수 있게)
    const FRotator CameraRotation = CameraComp->GetComponentRotation();
    const FRotator YawOnlyRotation(0.f, CameraRotation.Yaw, 0.f);  // Yaw만 사용 (Pitch, Roll은 무시)

    // 카메라의 Forward 및 Right 벡터 계산
    const FVector LocalCameraForward = FRotationMatrix(YawOnlyRotation).GetUnitAxis(EAxis::X);
    const FVector LocalCameraRight = FRotationMatrix(YawOnlyRotation).GetUnitAxis(EAxis::Y);

    // 이동 방향 계산 (W, A, S, D에 맞는 방향으로 이동)
    const FVector InputDirection = (LocalCameraForward * MovementInput.Y) + (LocalCameraRight * MovementInput.X);

    // MovementInput을 0으로 리셋
    MovementInput = FVector2D::ZeroVector;

    // 속도 보간
    const FVector DesiredVelocity = InputDirection.GetSafeNormal() * MaxWalkSpeed;
    Velocity = FMath::VInterpTo(Velocity, DesiredVelocity, DeltaTime, VelocityInterpSpeed);

    // 이동 적용
    AddActorWorldOffset(Velocity * DeltaTime, true);
}

void AGoodPerson::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        if (ASpartaPlayerController* PlayerController = Cast<ASpartaPlayerController>(GetController()))
        {
            // Move Action에 대한 입력 바인딩
            if (PlayerController->MoveAction)
            {
                EnhancedInput->BindAction(
                    PlayerController->MoveAction,
                    ETriggerEvent::Triggered,
                    this,
                    &AGoodPerson::Move
                );
                EnhancedInput->BindAction(
                    PlayerController->MoveAction,
                    ETriggerEvent::Completed,
                    this,
                    &AGoodPerson::StopMove
                );
            }

            // Look Action에 대한 입력 바인딩
            if (PlayerController->LookAction)
            {
                EnhancedInput->BindAction(
                    PlayerController->LookAction,
                    ETriggerEvent::Triggered,
                    this,
                    &AGoodPerson::Look
                );
                EnhancedInput->BindAction(
                    PlayerController->LookAction,
                    ETriggerEvent::Completed,
                    this,
                    &AGoodPerson::StopLook
                );
            }
        }
    }
}

void AGoodPerson::Move(const FInputActionValue& Value)
{
    // Value를 FVector2D로 받음 (WASD)
    MovementInput = Value.Get<FVector2D>();

    // 카메라의 Yaw 값을 기준으로 이동 방향을 설정
    const FRotator CameraRotation = CameraComp->GetComponentRotation();
    const FRotator YawOnlyRotation(0.f, CameraRotation.Yaw, 0.f);  // Yaw만 사용 (Pitch, Roll은 무시)

    // 카메라의 앞 방향 (Forward)과 오른쪽 방향 (Right) 벡터 계산
    const FVector ForwardDirection = FRotationMatrix(YawOnlyRotation).GetUnitAxis(EAxis::X);
    const FVector RightDirection = FRotationMatrix(YawOnlyRotation).GetUnitAxis(EAxis::Y);

    // 이동 방향 계산 (WASD로부터)
    const FVector InputDirection = (ForwardDirection * MovementInput.Y) + (RightDirection * MovementInput.X);

    // 이동 속도 계산
    const FVector DesiredVelocity = InputDirection.GetSafeNormal() * MaxWalkSpeed;
    Velocity = FMath::VInterpTo(Velocity, DesiredVelocity, GetWorld()->GetDeltaSeconds(), VelocityInterpSpeed);

    // 이동 적용
    AddActorWorldOffset(Velocity * GetWorld()->GetDeltaSeconds(), true);
}

void AGoodPerson::StopMove(const FInputActionValue& Value)
{
    MovementInput = FVector2D::ZeroVector;
}

void AGoodPerson::Look(const FInputActionValue& Value)
{
    FVector2D LookInputValue = Value.Get<FVector2D>();

    if (!FMath::IsNearlyZero(LookInputValue.X))
    {
        // Yaw 회전 (캐릭터만 회전)
        FRotator NewRotation = GetActorRotation();
        NewRotation.Yaw += LookInputValue.X * TurnRate * GetWorld()->GetDeltaSeconds();
        SetActorRotation(NewRotation);  // 캐릭터만 회전
    }

    if (!FMath::IsNearlyZero(LookInputValue.Y))
    {
        // Pitch 회전 (SpringArm만 회전)
        FRotator CurrentArmRotation = SpringArmComp->GetRelativeRotation();
        float NewPitch = CurrentArmRotation.Pitch - (LookInputValue.Y * LookUpRate * GetWorld()->GetDeltaSeconds());
        NewPitch = FMath::Clamp(NewPitch, MinPitch, MaxPitch);
        CurrentArmRotation.Pitch = NewPitch;

        SpringArmComp->SetRelativeRotation(CurrentArmRotation);
    }
}

void AGoodPerson::StopLook(const FInputActionValue& Value)
{
    LookInput = FVector2D::ZeroVector;
}
