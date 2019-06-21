#pragma once
#include "Player.h"
#include <string>
#include <iostream>

class Hunter : public Player
{
private:
	//void HunterPerksUpdate();
protected:

public:
	std::string Class;
	Hunter(std::string name);
	virtual void LevelUp();
	virtual int Attack();
	virtual std::string GetName();
	virtual void TakeDamage(int _damage);


};