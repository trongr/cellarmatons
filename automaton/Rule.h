#pragma once
#include <vector>

using namespace std;

class Rule
{
public:
	Rule();
    Rule(vector<int> encoding);
	~Rule();
    int newColor(vector<int> colors);
private:
    vector<int> _encoding; 
};

