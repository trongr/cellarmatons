#pragma once
#include <vector>
#include "Cell.h"
#include "Rule.h"

using namespace std;

class Game
{
public:
	Game();
	Game(vector<int> colors, Rule rule);
	~Game();
	void print();
	void update();
    void initcells(vector<int> colors);
private:
	vector<Cell> _cells;
    Rule _rule;
};

