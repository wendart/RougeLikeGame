#pragma once
#include "Weapon.h"

class Bow : public Weapon
{
	Bow(int min, int max);
	int DealDamage();
};