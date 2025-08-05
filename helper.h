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
    static void print_space(vector<vector<string>> space);
    vector<vector<string>> set_base(vector<vector<string>> space, int width, int height);

private:
    const std::map<string, string> map {
        {"block", "█"},
        {"bonus", "*"},
        {"up", "│"},
        {"down", "─"},
        {"end", "%"}
    };

};



#endif //HELPER_H