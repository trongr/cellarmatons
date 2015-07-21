#include <bitset>
#include <iostream>
#include <cmath>
#include "Rule.h"

using namespace std;

Rule::Rule()
{
}

/*
    encoding for this particular rule. e.g. if a group has 3
    elements, then there are 8 possible permutations:

    000
    001
    010
    011
    100
    101
    110
    111

    for each permutation, we can choose as a rule whether to set the
    middle cell to 0 or 1 in the next round, e.g.:

    000 -> 0
    001 -> 0
    010 -> 1
    011 -> 0
    100 -> 1
    101 -> 1
    110 -> 1
    111 -> 0

    the column on the right gives us a number 00101110 between 0 and
    255 corresponding to our rule. this number is the encoding
    of the rule. note that 00101110 has its zeroth digit first.

    size is the size of the group. in this case size == 3.
*/
Rule::Rule(string encoding)
{
    for (int i = 0; i < encoding.length(); i++){
        _encoding.push_back(encoding[i]);
    }
}

Rule::Rule(vector<int> encoding)
{
    _encoding = encoding;
}

Rule::~Rule()
{
}

int Rule::newColor(vector<int> colors){ // e.g. colors = {0, 1, 1}
    // basically convert binary colors into (decimal) int
    int colorsindex = 0;            
    for (int i = 0; i < colors.size(); i++){
        colorsindex += colors[i] * pow(2, i);
    }
    return _encoding[colorsindex];
}

std::vector<Rule> Rule::genRules(int ruleLength){
    std::vector<Rule> rules;
    int numRules = pow(2, ruleLength);
    for (int i = 0; i < numRules; i++){
        std::string encoding = std::bitset<32>(i).to_string();
        rules.push_back(Rule(encoding));
    }
    return rules;
}