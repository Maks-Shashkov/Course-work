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
	double A, B, C;
	cout << "������� ������������ 1-�� ��������� A, B � C ����� ������: " <<
		endl;
	cin >> A >> B >> C;
	Type1 eq1;
	cout << "������� ������������ 2-�� ��������� A, B � C ����� ������: " <<
		endl;
	cin >> A >> B >> C;
	Type2 eq2(B);
	cout << "������� ������������ 3-�� ��������� A, B � C ����� ������: " <<
		endl;
	cin >> A >> B >> C;
	Type3 eq3(C);
	cout << "������� ������������ 4-�� ��������� A, B � C ����� ������: " <<
		endl;
	cin >> A >> B >> C;
	Type4 eq4(A, C);
	cout << "������� ������������ 5-�� ��������� A, B � C ����� ������: " <<
		endl;
	cin >> A >> B >> C;
	Type5 eq5(B, C);
	cout << "������� ������������ 6-�� ��������� A, B � C ����� ������: " <<
		endl;
	cin >> A >> B >> C;
	Type6 eq6(A, B, C);
	cout << "������� ������������ 7-�� ��������� A, B � C ����� ������: " <<
		endl;
	cin >> A >> B >> C;
	Type7 eq7(B);
	cout << "������� ������������ 8-�� ��������� A, B � C ����� ������: " <<
		endl;
	cin >> A >> B >> C;
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



	return 0;
}

