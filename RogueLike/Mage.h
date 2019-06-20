#pragma once
#include "Player.h"
#include <string>

class Mage : public Player
{
private:
	//void MagePerksUpdate();

protected:

public:
	Mage(std::string name);
	virtual void LevelUp();
	virtual int Attack();
	virtual std::string GetName();


};
