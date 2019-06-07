#pragma once
#include <vector>
#include "Weapon.h"
#include "Potion.h"

class Equipment
{
	std::vector <Weapon*> Weapons;
	std::vector <Potion*> Potions;
};