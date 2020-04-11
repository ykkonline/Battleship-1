
#include <string>
#include <iostream>
#define MAXX 10
#define MAXY 10
class Team
{
private:
	std::string name;
	int enemydestroyed;
	int aliveships;
	int teamcode;
public:
	Team(std::string name, int enemydestroyed, int aliveships, int teamcode);
	void PlaceShips(int map[MAXX][MAXY]);
};