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

// returns the color of the new dominant cell in the group.
// e.g. if the group has size 3 return the new color of the middle cell.
//
// for now we're assuming that a group always has 3 cells, and the
// dominant one is in the middle, i.e. that's the one we're calculating 
// color for. TODO: bigger groups
void Cell::updateColor(Rule rule){
    setColor(1);
}

void Cell::updateNeighbours(Cell left, Cell right){
    _left = &left;
    _right = &right;
}
