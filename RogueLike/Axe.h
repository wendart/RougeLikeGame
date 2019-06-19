#pragma once
#include "Weapon.h"

class Axe : public Weapon
{
public:

	Axe(int min, int max);
	virtual int DealDamage();

};