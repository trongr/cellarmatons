// todo programmatically generate encodings and eliminate ones that 
// repeat patterns.

#include <iostream>
#include "Game.h"
#include "Rule.h"

using namespace std;

int main(){
    vector<int> encoding = { 0,1,1,0,0,1,0,1 };
    int NUM_CELLS = 400;
    vector<int> colors(NUM_CELLS, 0);
    colors[NUM_CELLS / 2] = 1; // seed a cell

    Rule rule = Rule(encoding);
	Game game(colors, rule);

    //vector<Rule> rules = Rule::genRules(8);

	system("PAUSE");
	return 0;
}