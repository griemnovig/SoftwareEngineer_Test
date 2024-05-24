// RedRuins Softworks (c)


#include "UReplicateObject.h"
#include "Net/UnrealNetwork.h"


void UUReplicateObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UUReplicateObject, boolvalue);
	DOREPLIFETIME(UUReplicateObject, floatvalue);
	DOREPLIFETIME(UUReplicateObject, intvalue);
}
