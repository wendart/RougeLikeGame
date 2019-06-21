#include "Monster.h"

Monster::Monster(int lvl) :
	Type(MONSTER(RANDOM.MonsterType())), Level(RANDOM.MonsterLevel(lvl))
{
	this->Armour = this->Level + 1;
	this->Health = this->Level + 40;
	if (this->Level * 3 == 0)
	{
		this->Damage = 8;
	}
	else if(this->Level < 0)
	{
		this->Damage = ((this->Level * 3) * -1);
	}
	else
	{
		this->Damage = (this->Level * 3);
	}
	
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

std::string Monster::PrintMonsterType()
{
	switch (this->Type)
	{
	case Troll:			return "Troll "; break;
	case Orc:			return "Orc "; break;
	case Goblin:		return "Goblin "; break;
	case WolvesPack:	return "WolvesPack "; break;
	case Dragon:		return "Dragon "; break;
	case Ghost:			return "Ghost "; break;
	case Zombie:		return "Zombie "; break;
	case Ghul:			return "Ghul "; break;
	case Treant:		return "Treant "; break;
	case Basilisk:		return "Basilisk "; break;
	case Harpy:			return "Harpy "; break;
	case Triton:		return "Triton "; break;
	case Lycanthrope:	return "Lycanthrope "; break;
	case Vampire:		return "Vampire "; break;
	}
}
