#include "Group.h"

Group::Group()
{
}

Group::Group(vector<Cell> cells)
{
	_cells = cells;
}

Group::~Group()
{
}

void Group::update(){
    _color = rand() % 2;
}

int Group::getColor(){
    return _color;
}
