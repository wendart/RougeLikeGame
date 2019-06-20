#pragma once
#include "Weapon.h"
#include "Stuff.h"
#include "Dagger.h"
#include "Sword.h"
#include "Bow.h"
#include "Axe.h"
#include "Potion.h"


class ItemGenerator
{
public:
	Weapon* GenerateWeapon(int lvl);
	Potion* GeneratePotion(int lvl);

};