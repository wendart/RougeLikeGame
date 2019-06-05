#pragma once
#include "Item.h"

enum WeaponType
{
	AXE,
	SWORD,
	STAFF,
	BOW,
	DAGGER
};

class Weapon : public Item
{
protected:

	int DamageMin;
	int DamageMax;
	int Durabilitty;

	virtual int DealDamage() = 0;

public:
	virtual WeaponType getWeaponType() = 0;
};