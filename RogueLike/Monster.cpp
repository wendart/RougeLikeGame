#include "Monster.h"

Monster::Monster(int lvl) :
	Type(MONSTER(RANDOM.MonsterType())), Level(RANDOM.MonsterLevel(lvl))
{
	this->Armour = this->Level + 1;
	this->Health = this->Level + 20;
	this->Damage = (this->Level*3);
}

int Monster::Attack()
{
	return Damage;
}

int Monster::GetLevel()
{
	return this->Level;
}

int Monster::GetHP()
{
	return Health;
}

void Monster::SetHP(int _HP)
{
	Health = _HP;
}
