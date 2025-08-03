#include <iostream>
#include <vector>
#include <string>

#include "helper.h"

using namespace std;


int main()
{
    helper helper;
    vector<vector<string>> vector;
    map<string,char> map
        {
            {"block", '⬛'},
            {"bonus", '❤'},
            {"up", '|'},
            {"down", '-'}
        };

    vector = helper.set_nothing(vector, 20, 20);
    helper.print_space(vector);
    helper.block_generator(vector);
    helper.bonus_generator(vector);

    return 0;
}