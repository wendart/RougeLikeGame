#pragma once
#include "Weapon.h"


class Sword : public Weapon
{
	Sword(int min, int max);
	int DealDamage();
};