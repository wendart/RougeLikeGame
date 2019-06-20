#include "Player.h"

Player::Player()
{
}


void Player::WeaponChange(int place)
{
	const int b = place;
	Weapons.push_back(weapon);
	weapon = Weapons.at(place);
	Weapons.erase(Weapons.begin() + place);
}

void Player::PrintWeapons()
{
	std::cout << "Your equipment: " << std::endl;
	for (int i = 0; i < Weapons.size(); i++)
	{
		Weapons[i]->PrintWeaponInfo();
	}
}

void Player::PrintPotions()
{
	std::cout << "Your potions: " << std::endl;
	for (int i = 0; i < Potions.size(); i++)
	{
		Potions[i]->PrintPotionValue();
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

int Player::Attack()
{
	return 0;
}

Weapon* Player::GetWeapon()
{
	return weapon;
}
