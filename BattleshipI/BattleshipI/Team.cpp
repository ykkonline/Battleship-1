#include "Team.hpp"
#include <string>
#include <iostream>
#include<vector>
#include<algorithm> 

Team::Team(std::string name, int enemydestroyed, int aliveships, int teamcode) {

	this->name = name;
	this->enemydestroyed = enemydestroyed;
	this->aliveships = aliveships;
	this->teamcode = teamcode;
}

void Team::PlaceShips(int map[MAXX][MAXY]) {
	int i;
	for (i = 0; i < this->aliveships; ) {
		int x = rand() % 10;
		int y = rand() % 10;
		if (map[x, y] > 0) {
			//restart
		}
		else if (map[x, y] == 0) {
			map[x][y] = this->teamcode;
			i++;
		}
	}
}