#include <iostream>
#include "Game.h"
#include "Rule.h"

using namespace std;

int main(){

	int gamesize = 100;
    int groupsize = 3;
    int encoding = 123;

    Rule rule = Rule(groupsize, encoding);
	Game game(gamesize, rule);

	system("PAUSE");
	return 0;
}