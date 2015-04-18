#include "Cell.h"

Cell::Cell()
{
	_color = 0;
}

Cell::Cell(int color)
{
	_color = color;
}

Cell::~Cell()
{
}

int Cell::getColor(){
	return _color;
}

void Cell::setColor(int color){
	_color = color;
}

