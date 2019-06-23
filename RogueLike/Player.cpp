#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
	if (weapon != NULL)
	{
		delete this->weapon;
	}

	for (int i = 0; i < this->Weapons.size(); i++)
	{
		delete this->Weapons[i];
	}

	for (int i = 0; i < this->Potions.size(); i++)
	{
		delete this->Potions[i];
	}
}

void Player::WeaponChange(int place)
{
	const int b = place;
	Weapons.push_back(weapon);
	weapon = Weapons.at(place);
	Weapons.erase(Weapons.begin() + place);
}

void Player::WeaponRemoval(int place)
{
	Weapon* weaponToRemove = Weapons.at(place);
	Weapons.erase(Weapons.begin() + place);

	delete weaponToRemove;
}

void Player::PrintWeapons()
{
	std::cout << "Your equipment: " << std::endl;
	for (int i = 0; i < Weapons.size(); i++)
	{
		std::cout << i + 1 << ". ";
		Weapons[i]->PrintWeaponInfo();
	}
}

void Player::PrintPotions()
{
	std::cout << "Your potions: " << std::endl;
	for (int i = 0; i < Potions.size(); i++)
	{
		std::cout << i + 1 << ". ";
		Potions[i]->PrintPotionValue();
	}
}

void Player::DrinkPotion(int place)
{
	this->HealthPoints = this->HealthPoints + Potions[place]->Heal();
	Potions.erase(Potions.begin() + place);
}

int Player::GetHealth()
{
	return this->HealthPoints;
}

int Player::GetLevel()
{
	return this->Level;
}


Weapon* Player::GetWeapon()
{
	return weapon;
}

bool Player::IsDead()
{
	return GetHealth() <= 0;
}
