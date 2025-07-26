// Created by kleymuner on 7/25/25.
#ifndef HELPER_H
#define HELPER_H

#include <vector>
#include <iostream>
#include <string>
#include <map>


using namespace std;

class helper {
public:
    helper();
    ~helper();

    // Основные функции


    // Перманентные функции
    void print_space(vector<vector<string>> space);
    vector<vector<string>> set_nothing(vector<vector<string>> space, int weight, int height);

private:
    std::map<string, char> symbols{{"blocked", '#'}, {"bonus", '*'}, {"end", '%'}};

};



#endif //HELPER_H