#pragma once
#include "Weapon.h"


class Staff : public Weapon
{
public:

	Staff(int min, int max);
	int DealDamage();

};