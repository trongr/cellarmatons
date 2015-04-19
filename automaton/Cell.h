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
    void updateNeighbours(Cell left, Cell right);
    void updateColor(Rule rule);
private:
	int _color;
    int _leftcolor;
    int _rightcolor;
};

