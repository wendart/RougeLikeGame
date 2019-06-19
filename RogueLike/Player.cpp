#include "Player.h"

Player::Player()
{
}


void Player::WeaponChange(bool change, int place)
{
	if (change == true)
	{

	}
}

void Player::PrintInventory()
{
	std::cout << "Your equipment: " << std::endl;
	for (int i = 0; i < Weapons.size(); i++)
	{
		Weapons[i]->PrintWeaponInfo();
	}
}

int Player::GetHealth()
{
	return this->HealthPoints;
}

int Player::GetLevel()
{
	return this->Level;
}
void Player::SetHealth(int _HP)
{
	HealthPoints = _HP;
}

int Player::Attac()
{
	return 0;
}

Weapon* Player::GetWeapon()
{
	return weapon;
}
