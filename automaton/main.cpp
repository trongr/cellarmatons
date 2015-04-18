#include <iostream>
#include "Game.h"

using namespace std;

int main(){

	int gamesize = 100;
	Game game(gamesize);
	game.print();

	system("PAUSE");
	return 0;
}