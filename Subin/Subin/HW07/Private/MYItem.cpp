#include "MYItem.h"

AMYItem::AMYItem()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Resources/Props/SM_Star_B.SM_Star_B"));
	if (MeshAsset.Succeeded())
	{
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/Resources/Materials/M_Gem_D.M_Gem_D"));
	if (MaterialAsset.Succeeded())
	{
		StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
	}

	PrimaryActorTick.bCanEverTick = true;

	RotationSpeed = 90.0f;

	MoveSpeed = 300.0f; 
	MaxRange = 300.0f;
	bMovingForward = true;
}

void AMYItem::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

void AMYItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	// 이동한 거리 계산
	float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

	// 최대 범위를 초과하면 방향 변경
	if (DistanceMoved >= MaxRange)
	{
		bMovingForward = !bMovingForward;
	}

	// 이동 방향 설정 ( 앞 또는 뒤로)
	float Direction = bMovingForward ? 1.0f : -1.0f;
	// 앞뒤 이동
	FVector NewLocation = CurrentLocation + FVector(0, Direction * MoveSpeed * DeltaTime, 0);

	//위치 적용
	SetActorLocation(NewLocation);
}
