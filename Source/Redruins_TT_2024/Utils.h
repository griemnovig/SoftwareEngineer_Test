// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Utils.generated.h"

class APlayerController;

UCLASS()
class UUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static bool ProjectWorldToScreenBidirectional(APlayerController const* Player, const FVector& WorldPosition,
		FVector2D& ScreenPosition, bool& bTargetBehindCamera, bool bPlayerViewportRelative = false);
};


