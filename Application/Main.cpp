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
	std::string eq = "2x^2 + 4x - 6 = 0";
	int A = equation.Extraction_a(eq);
	int B = equation.Extraction_b(eq);
	int C = equation.Extraction_c(eq);


	Type1 eq1;

	Type2 eq2(B);

	Type3 eq3(C);

	Type4 eq4(A, C);

	Type5 eq5(B, C);

	Type6 eq6(A, B, C);

	Type7 eq7(B);

	Type8 eq8(A, B);
	
	eq1.show();
	eq1.get_answer();
	eq2.show();
	eq2.get_answer();
	eq3.show();
	eq3.Get_answer();
	eq4.show();
	eq4.Get_answer();
	eq4.Get_answer_podbor();
	eq5.show();
	eq5.Get_answer();
	eq5.Get_answer_podbor();
	eq6.show();
	eq6.Get_answer();
	eq6.Get_answer_podbor();
	eq7.show();
	eq7.Get_answer();
	eq8.show();
	eq8.Get_answer();
	eq8.Get_answer_podbor();
}
