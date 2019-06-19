#include "Dagger.h"

Dagger::Dagger(int min, int max)
{
	Type = DAGGER;
	DamageMax = max;
	DamageMin = min;
}

int Dagger::DealDamage()
{
	return RANDOM.BasicDamage(DamageMin,DamageMax);
}
