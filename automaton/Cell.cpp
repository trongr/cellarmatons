#include <iostream>
#include "Cell.h"

using namespace std;

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

// calculate new color based on _color and _left and _right neighbours' colors
//
// TODO. more neighbours
void Cell::updateColor(Rule rule){
    setColor(rule.newColor({_leftcolor, getColor(), _rightcolor}));
}

void Cell::updateNeighbours(Cell left, Cell right){
    _leftcolor = left.getColor();
    _rightcolor = right.getColor();
}
