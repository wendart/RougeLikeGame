#include <iostream>
#include "Engine.h"


int main()
{
	Engine Game;

	try 
	{
		Game.PrepareGame();
	}
	catch (GAME_OVER &e)
	{
		std::cout << "You've been killed, your body will never be found." << std::endl;
	}

	system("pause");
	return 0;
}
