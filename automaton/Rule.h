#pragma once
#include <vector>
class Rule
{
public:
	Rule();
    Rule(int size, int encoding);
	~Rule();
private:
    int _size;
    int _encoding; 
};

