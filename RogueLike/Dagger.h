#pragma once
#include "Weapon.h"

class Dagger : public Weapon
{
public:

	Dagger(int min, int max);
	virtual int DealDamage();
	~Dagger();
};