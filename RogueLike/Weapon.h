#pragma once
#include "Rand.h"

enum WeaponType
{
	AXE,
	SWORD,
	STAFF,
	BOW,
	DAGGER
};

class Weapon
{
protected:
	WeaponType Type;
	int DamageMin = 0;
	int DamageMax = 0;


public:
	WeaponType getWeaponType();
	virtual int DealDamage() = 0;
};