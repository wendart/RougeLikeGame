#include <iostream>
#include "Engine.h"
#include "Console.h"

int main()
{
	Engine engine;

	engine.Start();

	/*try 
	{
		Game.Play();
		Game.Play();
	}
	catch (GAME_OVER &e)
	{
		std::cout << "You've been killed, your body will never be found." << std::endl;
	}*/

	system("pause");
	return 0;
}
