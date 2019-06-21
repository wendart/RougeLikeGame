#include "Bow.h"

Bow::Bow(int min, int max)
{
	Type = BOW;
	DamageMax = max;
	DamageMin = min;
}

int Bow::DealDamage()
{
	return RANDOM.BasicDamage(DamageMin,DamageMax);
}

Bow::~Bow()
{
	delete this;
}
