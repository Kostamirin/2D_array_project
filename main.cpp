#include <iostream>
#include <vector>
#include <string>

#include "helper.h"

using namespace std;


int main()
{
    helper helper;
    vector<vector<string>> vector;

    vector = helper.set_nothing(vector, 20, 20);
    helper.print_space(vector);

    return 0;
}