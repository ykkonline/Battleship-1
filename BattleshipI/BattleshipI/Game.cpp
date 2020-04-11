#include <string>
#include <iostream>
#include "Game.hpp"
#include "Team.hpp"



Game::Game(int aAlive, int bAlive) {
	
	this->aAlive = aAlive;
	this->aAlive = bAlive;
}

void Game::InitMatch() {
	Team aTeam = Team("a", 0, SHIPAMOUNT, 1);
	Team bTeam = Team("b", 0, SHIPAMOUNT, 2);
	int map[MAXX][MAXY] = { 0 };

	aTeam.PlaceShips(map);
	bTeam.PlaceShips(map);
	
}

