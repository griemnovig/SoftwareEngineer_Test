// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_1.generated.h"

class UTexture2D;
class UDA_2;


USTRUCT(Blueprintable)
struct FTestStructure {
	
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UDA_2* DataAsset;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString AssetName;
		 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* AssetThumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector Vector;
};

UCLASS(Blueprintable)
class REDRUINS_TT_2024_API UDA_1 : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTestStructure TestStructure;
};
