#pragma once
#include "Weapon.h"

enum AXE
{
	Beheader,
	BoneCracker,
	Warmonger,
	ReforgedAxe,
	PrimitiveAxe,
};

class Axe : public Weapon
{
	int DealDamage();

};