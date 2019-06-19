#pragma once
#include "Weapon.h"


class Sword : public Weapon
{
public:

	Sword(int min, int max);
	int DealDamage();
};