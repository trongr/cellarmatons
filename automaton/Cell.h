#pragma once
#include <string>

using namespace std;

class Cell
{
public:
	Cell();
	Cell(int color);
	~Cell();
	int getColor();
	void setColor(int color);
private:
	int _color;
};

