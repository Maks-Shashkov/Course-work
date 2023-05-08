#include <iostream>
#include "EquationController.h"
#include "Type1.h"
#include "Type2.h"
#include "Type3.h"
#include "Type4.h"
#include "Type5.h"
#include "Type6.h"
#include "Type7.h"
#include "Type8.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	EquationController equation;
	while (true)
	{
		std::string eq;
		std::cout << "Введите уравнение: ";
		std::getline(std::cin, eq);
		float A = equation.Extraction_a(eq);
		float B = equation.Extraction_b(eq);
		float C = equation.Extraction_c(eq);
		cout << "Коэффициент A равен:" << A << endl;
		cout << "Коэффициент B равен:" << B << endl;
		cout << "Коэффициент C равен:" << C << endl;

		if (A == 0 && B == 0 && C == 0) {
			Type1 eq1;
			eq1.show();
			eq1.get_answer();
		}
		else if (B == 0 && C == 0)
		{
			Type2 eq2(B);
			eq2.show();
			eq2.get_answer();
		}
		else if (B == 0 && A == 0)
		{
			Type3 eq3(C);
			eq3.show();
			eq3.Get_answer();
		}
		else if (B == 0)
		{
			Type4 eq4(A, C);
			eq4.show();
			eq4.Get_answer();
		}
		else if (A == 0)
		{
			Type5 eq5(B, C);
			eq5.show();
			eq5.Get_answer();
			eq5.Get_answer_podbor();
		}
		else if (A == 0 && C == 0)
		{
			Type7 eq7(B);
			eq7.show();
			eq7.Get_answer();
		}
		else if (C == 0)
		{
			Type8 eq8(A, B);
			eq8.show();
			eq8.Get_answer();
			eq8.Get_answer_podbor();
		}
		else {
			Type6 eq6(A, B, C);
			eq6.show();
			eq6.Get_answer();
			eq6.Get_answer_podbor();
		}
	}
}
