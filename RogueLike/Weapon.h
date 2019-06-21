#pragma once
#include "Rand.h"
#include <iostream>

enum WeaponType
{
	AXE,
	BOW,
	DAGGER,
	STAFF,
	SWORD,
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
	std::string ToStringWeaponInfo();
	virtual int DealDamage() = 0;
	int GetMax();
	int GetMin();
	//~Weapon();
};