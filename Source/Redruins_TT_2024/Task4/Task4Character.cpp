// RedRuins Softworks (c)

#include "Task4Character.h"
#include "Engine/ActorChannel.h"
#include "UReplicateObject.h"
#include "Net/UnrealNetwork.h"


ATask4Character::ATask4Character()
{
	PrimaryActorTick.bCanEverTick = true;
	
	bReplicates = true;
	// Радиус репликации.
	NetCullDistanceSquared = 99999;
	// Частота репликации: кол-во раз в секунду
	NetUpdateFrequency = 10.f;
}

bool ATask4Character::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool bSuperValue = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	// Реплицируем объект.
	if (ReplicatedObj) bSuperValue |= Channel->ReplicateSubobject(ReplicatedObj , *Bunch, *RepFlags);

	return bSuperValue;
}

void ATask4Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Помечаем ссылку для репликации.
	DOREPLIFETIME(ATask4Character, ReplicatedObj);
}

void ATask4Character::BeginPlay()
{
	Super::BeginPlay();
	
	if(HasAuthority())
	{
		ReplicatedObj = NewObject<UUReplicateObject>(this);
	}
}
