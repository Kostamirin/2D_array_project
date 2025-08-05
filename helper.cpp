// Created by kleymuner on 7/25/25.

#include "helper.h"

#include <thread>


helper::helper() //Производит действия в начале (в любом случае)
{
    std::cout << "*** The program is starts ***" << endl;
}

helper::~helper() //Производит действия в конце (в любом случае)
{
    std::cout << "*** The program is ends here ***" << endl;
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
    std::cout << "-----------" << endl;
    for (int y = 0; y < space.size(); y++)
    {
        for (int x = 0; x < space[y].size(); x++)
        {
            cout << "[";
            cout << space[y][x];
            cout << "]";
        }
        cout << endl;
    }

    // Таймаут для осознания лабиринта
    std::this_thread::sleep_for((std::chrono::milliseconds(750)));
}

//// Работает из-за using namespace std; в helper.h файле
vector<vector<string>> helper::set_base(vector<vector<string>> space, int width, int height)
//* weight- обозначает количество строк(=), height - количество столбцов(||)
{
    // Инициализация вектора с правильными размерами
    vector<vector<string>> answer(space.size(), vector<string>(space[0].size(), " "));

    // Заполнить границы
    for (int y = 0; y < width; y++)
    {
        answer[y][0] = map.at("block");
        answer[y][height - 1] = map.at("block");
    }

    for (int x = 0; x < height; x++)
    {
        answer[0][x] = map.at("block");
        answer[width - 1][x] = map.at("block");
    }

    return answer;
}
