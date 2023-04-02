#include "Type7.h"
#include <iostream>
#include <cmath>
using namespace std;

Type7::Type7(double b1) {
	B = b1;
}
void Type7::Get_answer() {
	cout << "Корень уравнения: x = 0" << endl;
}
void Type7::show() {
	cout << "Уравнение " << B << "*x = 0" << endl;
}
