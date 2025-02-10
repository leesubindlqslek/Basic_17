#include "SpartaPlayerController.h"
#include "EnhancedInputSubsystems.h"

ASpartaPlayerController::ASpartaPlayerController()
    : InputMappingContext(nullptr),
      MoveAction(nullptr),
      LookAction(nullptr)
{
}

void ASpartaPlayerController::BeginPlay()
{
    Super::BeginPlay();
  
    if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
        {
            if (InputMappingContext)  // Input Mapping Context가 설정되었는지 확인
            {
                Subsystem->AddMappingContext(InputMappingContext, 0);  // 컨텍스트를 추가
            }
        }
    }
}