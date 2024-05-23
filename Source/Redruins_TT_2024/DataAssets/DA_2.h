// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_2.generated.h"

class UDA_1;

UENUM()
enum ETestEnum : uint8
{
	value_true = 0,
	value_false,
	value_n
};


UCLASS(Blueprintable)
class REDRUINS_TT_2024_API UDA_2 : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<ETestEnum> Enumeration;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(EditCondition="Enumeration == ETestEnum::value_true", EditConditionHides))
	UDA_1* DataAsset;
};
