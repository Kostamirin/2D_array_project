#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <time.h>

#include "helper.h"

using namespace std;

int main()
{
    helper helper;
    // Инициализация вектора с правильными размерами (20x20), заполненного пробелами
    vector<vector<string>> vector(20, std::vector<string>(20, " "));

    helper.print_space(vector);
    vector = helper.set_base(vector, 20, 20);
    helper.print_space(vector);
    helper.block_generator(vector);
    // helper.bonus_generator(vector);

    return 0;
}
