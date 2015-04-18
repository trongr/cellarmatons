#pragma once
#include <vector>
#include "Cell.h"
#include "Group.h"

using namespace std;

class Game
{
public:
	Game();
	Game(int size);
	~Game();
	void print();
	void update();
	void initcells(int size);
	void initgroups();
private:
	vector<Cell> _cells;
	vector<Group> _groups;
};

