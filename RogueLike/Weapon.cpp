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

std::string Weapon::ToStringWeaponInfo()
{

	std::string _weapon;
	_weapon = "Axe Min\n Damage: " + DamageMin + _weapon + ("\nMax Damage: " + DamageMax);
	return _weapon;


}


int Weapon::GetMax()
{
	return this->DamageMax;
}

int Weapon::GetMin()
{
	return this->DamageMin;
}

/*
Weapon::~Weapon()
{
	delete this;
}
*/
