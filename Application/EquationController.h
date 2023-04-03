#pragma once
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class EquationController
{
public:
    int Extraction_a(const std::string& equation);

    string remove_x_squared(string equation);

    void removeSpaces(std::string& str);

    int Extraction_b(const std::string& equation);

    int Extraction_c(const std::string& equation);
};

