#pragma once
#include <string>
#include "Rule.h"

using namespace std;

class Cell
{
public:
	Cell();
	Cell(int color);
	~Cell();
	int getColor();
	void setColor(int color);
    void updateColor(Rule rule);
    void updateNeighbours(Cell left, Cell right);
private:
	int _color;
    Cell* _left;
    Cell* _right;
};

