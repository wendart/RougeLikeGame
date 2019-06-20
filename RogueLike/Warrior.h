#pragma once
#include "Player.h"
#include <string>

class Warrior : public Player
{
private:
	//void WarriorPerksUpdate();

protected:

public:
	Warrior(std::string name);
	virtual void LevelUp();
	virtual int Attack();
	virtual std::string GetName();


};
