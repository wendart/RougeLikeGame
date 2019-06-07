#pragma once
#include "Weapon.h"

enum STAFF
{
	InfusedCane,
	LitchStuff,
	OldBranch,
	FoolsOath,
	LastHope
};

class Staff : public Weapon
{
	int DealDamage();

};