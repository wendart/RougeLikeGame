#include "Player.h"

Player::Player()
{
	HealthPoints = 20;
	Damage = 3;
	Armour = 1;
	Level = 1;
	EvasionChance = 0;
	Equipment e1;
	eq = e1;
}

std::string Player::GetName()
{
	return this->Name;
}

void Player::InventoryManagement()
{

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
