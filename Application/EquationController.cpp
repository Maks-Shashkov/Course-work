#include "EquationController.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

float EquationController::Extraction_a(const std::string& equation) {
    float a;
    std::size_t pos = equation.find("x^2");
    if (pos != std::string::npos) {
        std::string sub_result = equation.substr(0, pos);
        if (sub_result.length() == 1 && sub_result == "-") {
            a = -1;
        }
        else {
            a = sub_result.empty() ? 1 : std::stof(sub_result);
        }
    }
    else {
        a = 0;
    }
    return a;
}


string EquationController::remove_x_squared(string equation) {
    size_t pos = equation.find("x^2");
    if (pos != string::npos) {
        size_t a_pos = equation.rfind(" ", pos) + 1;
        size_t next_pos = equation.find_first_of("+-", pos);
        if (next_pos == string::npos) {
            equation.erase(a_pos);
        }
        else {
            equation.erase(a_pos, next_pos - a_pos);
        }
    }
    return equation;
}

void EquationController::removeSpaces(std::string& str) {
    std::string::iterator end_pos = std::remove(str.begin(), str.end(), ' ');
    str.erase(end_pos, str.end());
}

float EquationController::Extraction_b(const std::string& equation) {
    float b;
    std::string eq = equation; // сохраняем исходную строку
    removeSpaces(eq); // удаляем пробелы из строки
    std::string equation_remove = remove_x_squared(eq); // удаляем Ax^2
    std::size_t pos = equation_remove.find("x");
    if (pos != std::string::npos) {
        std::string sub_result = equation_remove.substr(0, pos); // коеффициент перед x
        if (sub_result.length() == 1 && sub_result == "+") {
            b = 1;
        }
        else if (sub_result.length() == 1 && sub_result == "-") {
            b = -1;
        }
        else {
            if (sub_result[0] == '-') {
                b = -stof(sub_result.substr(1));
            }
            else
            {
                b = stof(sub_result.substr(0));
            }
        }
    }
    else {
        b = 0;
    }
    return b;
}

float EquationController::Extraction_c(const std::string& equation) {
    float c_result;
    float c;
    std::string eq = equation; // сохраняем исходную строку
    removeSpaces(eq); // удаляем пробелы из строки
    std::string equation_remove = remove_x_squared(eq);
    std::size_t pos = equation_remove.find("="); // индекс чмсла который стоит перед = 
    std::size_t pos_с = equation_remove.find("x") + 1; // индекс первой цифры коеффициента c 
    if (pos != std::string::npos) {
        std::string c_str = equation_remove.substr(pos_с, pos - pos_с); // срез коеффициента c 
        if (c_str[0] == '-') {
            c = -stof(c_str.substr(1));
        }
        else
        {
            if (c_str.empty()) {
                c_result = 0;
            }
            else {
                c_result = stof(c_str.substr(0));
            }
        }
    }
    else {
        c_result = 0;
    }
    return c_result;
}
