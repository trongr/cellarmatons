#include "Rule.h"


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

    the column on the right gives us a number 01110100 between 0 and
    255 corresponding to our rule. this number is the encoding
    of the rule.

    size is the size of the group. in this case size == 3.
*/
Rule::Rule(int size, int encoding)
{
    _size = size;
    _encoding = encoding;
    // mk convert encoding to some kind of array so you can compare a group to its entries
    // and calculate the new color
}

Rule::~Rule()
{
}


