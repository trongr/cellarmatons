#include <iostream>
#include "Game.h"

using namespace std;

Game::Game()
{
}

Game::Game(vector<int> colors, Rule rule){
    _rule = rule;
	initcells(colors);
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
    size_t cellssize = _cells.size();
    for (size_t i = 0; i < cellssize; i++){
        _cells[i].updateNeighbours(
            _cells[(i - 1 + cellssize) % cellssize], 
            _cells[(i + 1 + cellssize) % cellssize]);
    }
	for (size_t i = 0; i < cellssize; i++){
		_cells[i].updateColor(_rule);
	}
}

void Game::initcells(vector<int> colors){
    for (int i = 0; i < colors.size(); i++){
        _cells.push_back(Cell(colors[i]));
    }
}
