#pragma once
#include <vector>
#include "Cell.h"
#include "Rule.h"

using namespace std;

class Game
{
public:
	Game();
	Game(int size, Rule rule);
	~Game();
	void print();
	void update();
	void initcells(int size);
private:
	vector<Cell> _cells;
    Rule _rule;
};

