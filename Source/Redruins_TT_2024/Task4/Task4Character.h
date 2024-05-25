// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Task4Character.generated.h"

class UUReplicateObject;

UCLASS()
class REDRUINS_TT_2024_API ATask4Character : public ACharacter
{
	GENERATED_BODY()

public:
	ATask4Character();

	virtual bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void GetLifetimeReplicatedProps (TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(Replicated, BlueprintReadWrite, VisibleAnywhere, Category="ReplicatedObj")
	UUReplicateObject* ReplicatedObj = nullptr;
};
