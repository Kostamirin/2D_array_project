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

void helper::print_space(vector<vector<string>> space)
{
    for (int i = 0; i < space.size(); i++)
    {
        for (int j = 0; j < space[i].size(); j++)
        {
            cout <<"[";
            cout << space[i][j];
            cout << "]";
        }
        cout << endl;
    }
}

//// Работает из-за using namespace std; в helper.h файле
vector<vector<string>> helper::set_nothing(vector<vector<string>> space, int weight, int height)
//* weight- обозначает количество строк(=), height - количество столбцов(||)
{
    vector<vector<string>> answer;
    for (int i = 0; i < weight; i++)
    {
        vector<string> side_vector;
        for (int j = 0; j < height; j++)
        {
            side_vector.push_back("_");
        }
        answer.push_back(side_vector);
    }
    return answer;
}





