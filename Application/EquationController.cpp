//#include "EquationController.h"
//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//int EquationController::Extraction_a(const std::string& equation) {
//    int a;
//    std::size_t pos = equation.find("x^2");
//    if (pos != std::string::npos) {
//        std::string sub_result = equation.substr(0, pos);
//        if (sub_result.length() == 1 && sub_result == "-") {
//            a = -1;
//        }
//        else {
//            a = sub_result.empty() ? 1 : std::stoi(sub_result);
//        }
//    }
//    else {
//        a = 0;
//    }
//    return a;
//}
//
//
//string EquationController::remove_x_squared(string equation) {
//    size_t pos = equation.find("x^2");
//    if (pos != string::npos) {
//        // Удаляем коэффициент A, член AX^2 и следующий знак операции
//        size_t a_pos = equation.rfind(" ", pos) + 1;
//        size_t next_pos = equation.find_first_of("+-", pos);
//        if (next_pos == string::npos) {
//            equation.erase(a_pos);
//        }
//        else {
//            equation.erase(a_pos, next_pos - a_pos);
//        }
//    }
//    return equation;
//}
//
//void EquationController::removeSpaces(std::string& str) {
//    std::string::iterator end_pos = std::remove(str.begin(), str.end(), ' ');
//    str.erase(end_pos, str.end());
//}
//
//int EquationController::Extraction_b(const std::string& equation) {
//    int b;
//    int b_int;
//    std::string eq = equation; // сохраняем исходную строку
//    removeSpaces(eq); // удаляем пробелы из строки
//    std::string equation_remove = remove_x_squared(eq);
//    std::size_t pos = equation_remove.find("x");
//    if (pos != std::string::npos) {
//        std::string sub_result = equation_remove.substr(0, pos);
//        if (sub_result.length() == 1 && sub_result == "+") {
//            b = 1;
//        }
//        else if (sub_result.length() == 1 && sub_result == "-") {
//            b = -1;
//        }
//        else {
//            if (sub_result[0] == '-') {
//                b = -stoi(sub_result.substr(1));
//            }
//            else
//            {
//                b = stoi(sub_result.substr(0));
//            }
//        }
//    }
//    else {
//        b = 0;
//    }
//    return b;
//}
//
//int EquationController::Extraction_c(const std::string& equation) {
//    int c;
//    int c_str;
//    std::string eq = equation; // сохраняем исходную строку
//    removeSpaces(eq); // удаляем пробелы из строки
//    std::string equation_remove = remove_x_squared(eq);
//    std::size_t pos = equation_remove.find("=");
//    std::size_t pos_x = equation_remove.find("x") + 1;
//    if (pos != std::string::npos) {
//        std::string a_str = equation_remove.substr(pos_x, pos - pos_x);
//        c = a_str.empty() ? 1 : std::stoi(a_str);
//        if (a_str[0] == '-') {
//            c_str = -stoi(a_str.substr(1));
//        }
//        else
//        {
//            c_str = stoi(a_str.substr(0));
//        }
//        c = a_str.empty() ? 1 : c_str;
//    }
//    else {
//        c = 0;
//    }
//    return c;
//}