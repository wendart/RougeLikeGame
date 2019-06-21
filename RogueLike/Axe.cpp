#include "Axe.h"

Axe::Axe(int min, int max)
{
	Type = AXE;
	DamageMax = max;
	DamageMin = min;
}

int Axe::DealDamage()
{
	if (RANDOM.Random100() < 9)
	{
		return (RANDOM.BasicDamage(DamageMin, DamageMax) + DamageMax);
	}
	else
	{
		return RANDOM.BasicDamage(DamageMin, DamageMax);
	}
	
}

Axe::~Axe()
{
	delete this;
}
