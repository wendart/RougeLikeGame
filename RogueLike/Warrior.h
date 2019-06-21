#pragma once
#include "Player.h"
#include <string>

class Warrior : public Player
{
private:
	//void WarriorPerksUpdate();

protected:

public:
	std::string Class;
	Warrior(std::string name);
	virtual void LevelUp();
	virtual int Attack();
	virtual std::string GetName();
	void TakeDamage(int _damage);


};
