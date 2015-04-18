#pragma once
#include <vector>
#include "Cell.h"
#include "Rule.h"

// a group of (e.g. adjacent) cells, so you can mutate them based on a rule
class Group
{
public:
	Group();
	Group(vector<Cell> cells); // cells is a vector of 3 cells: left, middle, and right
	~Group();
	void update();
    int getColor();
private:
	vector<Cell> _cells;
	Rule _rule;
    int _color; // color of the middle cell in the group
};

