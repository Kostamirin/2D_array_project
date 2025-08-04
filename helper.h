// Created by kleymuner on 7/25/25.
#ifndef HELPER_H
#define HELPER_H

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>


using namespace std;

class helper {
public:
    helper();
    ~helper();

    // Основные функции
    vector<vector<string>> block_generator(vector<vector<string>> space);
    vector<vector<string>> bonus_generator(vector<vector<string>> space);

    // Перманентные функции
    void print_space(vector<vector<string>> space);
    vector<vector<string>> set_base(vector<vector<string>> space, int weight, int height);

private:
    std::map<string, char> symbols{{"blocked", '#'}, {"bonus", '*'}, {"end", '%'}};

};



#endif //HELPER_H