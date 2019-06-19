#include "Monster.h"

Monster::Monster(Rand* r, int lvl) :
	Type(MONSTER(r->MonsterType())), Level(r->MonsterLevel(lvl))
{
	this->Armour = this->Level + 1;
	this->Health = this->Level + 20;
	this->Damage = this->Level;
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
