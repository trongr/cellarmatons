#pragma once
#include <vector>

using namespace std;

class Rule
{
public:
    Rule();
    Rule(vector<int> encoding);
    Rule(string encoding);
    ~Rule();
    vector<int> getEncoding(){ return _encoding; };
    int newColor(vector<int> colors);
    static std::vector<Rule> genRules(int ruleLength);
private:
    vector<int> _encoding; 
};

