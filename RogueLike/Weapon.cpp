#include "Weapon.h"

WeaponType Weapon::getWeaponType()
{
	return Type;
}

void Weapon::PrintWeaponInfo()
{
	int a = Type;
	switch (a)
	{
	case 0:
		std::cout << "Axe" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;
	case 1:
		std::cout << "Bow" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;
	case 2:
		std::cout << "Dagger" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;
	case 3:
		std::cout << "Staff" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;
	case 4:
		std::cout << "Sword" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;

	}
}

Weapon::~Weapon()
{
	delete this;
}
