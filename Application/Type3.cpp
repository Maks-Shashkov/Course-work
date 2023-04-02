#include "Type3.h"
#include <iostream>
#include <cmath>
using namespace std;

Type3::Type3(double c1) {
	C = c1;
}
void Type3::Get_answer() {
	cout << "Корней нет" << endl;
}
void Type3::show() {
	cout << C << " = 0" << endl;
}
