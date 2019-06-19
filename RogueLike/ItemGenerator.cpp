#include "ItemGenerator.h"

Weapon* ItemGenerator::GenerateWeapon(int lvl)
{
	int a = RANDOM.WeaponRoll();
	Weapon* weapon = NULL;
	switch (a)
	{
		case 0:
			weapon = new Dagger(lvl + 2, lvl + 3);
			break;
		case 1:
			weapon = new Sword(lvl, lvl+3);
			break;
		case 2:
			weapon = new Staff(lvl, lvl + 1);
			break;
		case 3:
			weapon = new Axe(lvl, lvl +2);
			break;
		case 4:
			weapon = new Bow(lvl +6, lvl+8);
			break;
	}

	return weapon;
}
