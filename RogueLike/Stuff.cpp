#include "Stuff.h"

Staff::Staff(int min, int max)
{
	Type = STAFF;
	DamageMax = max;
	DamageMin = min;
}

int Staff::DealDamage()
{
	if (RANDOM.Random100() < 6)
	{
		return DamageMin + DamageMin;
	}
	else
	{
		return RANDOM.BasicDamage(DamageMin, DamageMax);
	}
}
