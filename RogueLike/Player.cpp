#include "Player.h"

Player::Player()
{
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
