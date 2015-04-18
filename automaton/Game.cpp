#include <iostream>
#include "Game.h"

using namespace std;

Game::Game()
{
}

Game::Game(int size){

	initcells(size);
	initgroups();

	while (true){ // c-c to end program
		update();
		print();
	}
}

Game::~Game()
{
}

void Game::print()
{
	for (size_t i = 0; i < _cells.size(); i++){
		cout << _cells[i].getColor();
	}
	cout << endl;
}

void Game::update(){
	for (size_t i = 0; i < _groups.size(); i++){
		_groups[i].update();
	}
    for (size_t i = 0; i < _groups.size(); i++){
        _cells[i].setColor(_groups[i].getColor());
    }
}

void Game::initcells(int size){
	_cells = vector<Cell>(size);
}

void Game::initgroups(){
	size_t cellssize = _cells.size();
	for (size_t i = 0; i < cellssize; i++){
        _groups.push_back(Group({ 
            _cells[(i - 1 + cellssize) % cellssize],
            _cells[(i     + cellssize) % cellssize],
            _cells[(i + 1 + cellssize) % cellssize]
        }));
	}
}