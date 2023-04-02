#include "Type2.h"
#include <iostream>
using namespace std;

Type2::Type2(double a1) {
    A = a1;
}

void Type2::get_answer() {
    cout << "Ответом является Х = 0" << endl;
}

void Type2::show() {
    cout << "Уравнение " << A << "*x^2 = 0" << endl;
}



