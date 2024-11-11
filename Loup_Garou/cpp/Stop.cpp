#include "../h/Main.h"
#include "../h/Stop.h"

void StopGame() {
	DestroyAllRole();
}

void DestroyAllRole() {
	DestroyClairvoyant();
	DestroyCupid();
	DestroyHunter();
	DestroyLittle_Girl();
	DestroyThiever();
	DestroyVillager();
	DestroyWerewolf();
	DestroyWitch();
}