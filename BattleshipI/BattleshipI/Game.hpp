#include <string>
#include <iostream>
#define SHIPAMOUNT 5
#define DEADCODE 3
#define MAXX 10
#define MAXY 10
class Game 
{
	private:
		std::string name;
		int aAlive;
		int bAlive;
	public:
		Game(int aAlive, int bAlive);
		void InitMatch();
};
