#include "Utilitaires.h"
#include <stdlib.h>

bool Utilitaires::OtbenirBoolHazard()
{
	return 0 + (rand() % (1 - 0 + 1)) == 1;
}

int Utilitaires::ObtenirIntHazard(int min, int max)
{
	return rand() % max + min;
}

SortType Utilitaires::ObtenirSortHazard()
{
	return OtbenirBoolHazard() ? SortType::Attaque : SortType::Defense;
}


