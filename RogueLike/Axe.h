#pragma once
#include "Weapon.h"

class Axe : public Weapon
{
	Axe(int min, int max);
	virtual int DealDamage();

};