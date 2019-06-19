#include "Sword.h"

Sword::Sword(int min, int max)
{
	Type = SWORD;
	DamageMax = max;
	DamageMin = min;
}

int Sword::DealDamage()
{
	return (DamageMax + (0.2*DamageMin));
}
