// Created by kleymuner on 7/25/25.

#include "helper.h"


helper::helper() //Производит действия в начале (в любом случае)
{
    std::cout <<"*** The program is starts ***" <<endl;
}

helper::~helper() //Производит действия в конце (в любом случае)
{
    std::cout <<"*** The program is ends here ***" <<endl;
}


vector<vector<string>> helper::block_generator(vector<vector<string>> space)
{

    return space;
}

vector<vector<string>> helper::bonus_generator(vector<vector<string>> space)
{
    return space;
}


void helper::print_space(vector<vector<string>> space)
{
    for (int y = 0; y < space.size(); y++)
    {
        for (int x = 0; x < space[y].size(); x++)
        {
            cout <<"[";
            cout << space[y][x];
            cout << "]";
        }
        cout << endl;
    }
}

//// Работает из-за using namespace std; в helper.h файле
vector<vector<string>> helper::set_base(vector<vector<string>> space, int weight, int height)
//* weight- обозначает количество строк(=), height - количество столбцов(||)
{
    vector<vector<string>> answer;

    for (int y = 0; y < weight; y++)
    {
        answer[y][0] = "█";
        answer[y][height-1] = "█";
    }

    for (int x = 0; x < weight; x++)
    {
        answer[0][x] = "█";
        answer[weight-1][x] = "█";
    }

    return answer;
}





