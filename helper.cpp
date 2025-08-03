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


vector<vector<string>> block_generator(vector<vector<string>> space)
{

    return space;
}

vector<vector<string>> bonus_generator(vector<vector<string>> space)
{
    return space;
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
vector<vector<string>> helper::set_base(vector<vector<string>> space, int weight, int height)
//* weight- обозначает количество строк(=), height - количество столбцов(||)
{
    vector<vector<string>> answer;
    for (int i = 0; i < weight; i++)
    {
        if (i = 0 || i == weight - 1)
        {
            answer[i].push_back(std::string("⬛"));
        }

        vector<string> side_vector;
        for (int j = 0; j < height; j++)
        {
            if (j == 0 || j == height - 1)
            {
                answer[i].push_back(std::string("⬛"));
            }

            side_vector.push_back("_");
        }
        answer.push_back(side_vector);
    }
    return answer;
}





