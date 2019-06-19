#pragma once
#include "Weapon.h"


class Staff : public Weapon
{
	Staff(int min, int max);
	int DealDamage();

};