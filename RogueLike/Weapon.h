#pragma once
#include "Rand.h"
#include <iostream>

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
	void PrintWeaponInfo();
	virtual int DealDamage() = 0;
	~Weapon();
};