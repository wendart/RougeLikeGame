#include "Weapon.h"

WeaponType Weapon::getWeaponType()
{
	return Type;
}

void Weapon::PrintWeaponInfo()
{
	switch (Type)
	{
	case AXE:
		std::cout << "Axe" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;
	case BOW:
		std::cout << "Bow" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;
	case DAGGER:
		std::cout << "Dagger" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;
	case STAFF:
		std::cout << "Staff" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;
	case SWORD:
		std::cout << "Sword" << std::endl << "Min Damage: " << DamageMin << std::endl << "Max Damage: " << DamageMax << std::endl;
		break;

	}
}

Weapon::~Weapon()
{
	delete this;
}
