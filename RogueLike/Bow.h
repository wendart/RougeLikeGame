#pragma once
#include "Weapon.h"

class Bow : public Weapon
{
public:

	Bow(int min, int max);
	virtual int DealDamage();
};