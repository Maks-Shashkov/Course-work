#include "Type5.h"
#include <iostream>
#include <cmath>
using namespace std;


Type5::Type5(double b1, double c1) {
	B = b1;
	C = c1;
}
void Type5::Get_answer() {
	cout << "Корень уравнения: " << (-1) * (C / B) << endl;
}
void Type5::show() {
	cout << "Уравнение " << B << "*x + " << C << " = 0" << endl;
}
void Type5::Get_answer_podbor() {
	double min = abs(0 - B * (-20) - C);
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		double temp = abs(0 - B * (i)-C);
		if (temp < min) {
			min = temp;
			x = i;
		}
	}
	cout << "Приближенно, один из корней уравнения: " << x << endl;
}

