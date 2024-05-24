// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "UReplicateObject.generated.h"

UCLASS(Blueprintable)
class REDRUINS_TT_2024_API UUReplicateObject : public UObject
{
	GENERATED_BODY()
	
public:	
	virtual bool IsSupportedForNetworking () const override { return true; };

	virtual void GetLifetimeReplicatedProps (TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(Replicated, BlueprintReadWrite, VisibleAnywhere)
	bool boolvalue;
	
	UPROPERTY(Replicated, BlueprintReadWrite, VisibleAnywhere)
	float floatvalue;
	
	UPROPERTY(Replicated, BlueprintReadWrite, VisibleAnywhere)
	int intvalue;
};
