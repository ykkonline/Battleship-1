
#include <string>
#include <iostream>

#include "Team.hpp"
#include "Game.hpp"

int main()
{
	Game myGame = Game(SHIPAMOUNT, SHIPAMOUNT);
	myGame.InitMatch();

	return 0;
}
