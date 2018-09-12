//main.cpp
#include <iostream>
#include"Vector.h"
#include "Rational.h"
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	Vector <int> v1I, v2I;
	Vector <double> v1D, v2D;
	Vector <Rational> v1R, v2R;
	Rational numRAT;
	int size, change, numInt;
	double numDOU;
	while (1)
	{
		cout << "===================================================" << endl;
		cout << "==============�������� �����=======================" << endl;
		cout << "===================================================" << endl;
		cout << "[1]-������ � ������ �������========================" << endl;
		cout << "===================================================" << endl;
		cout << "[2]-������ � ������������� �������=================" << endl;
		cout << "===================================================" << endl;
		cout << "[3]-������ � ������������� �������=================" << endl;
		cout << "===================================================" << endl;
		cin >> change;
		switch (change)
		{
		case 1:
			system("cls");
			cout << "===========������ � ������ �������=================" << endl;
			cout << "===================================================" << endl;
			cout << "������� ������ ������ V1:" << endl; cin >> v1I;
			cout << "������� ������ ������ V2:" << endl; cin >> v2I;
			cout << "������� ����� ����� K:" << endl; cin >> numInt;
			system("cls");
			cout << "V1=" << v1I << endl;
			cout << "V2=" << v2I << endl;
			cout << "K=" << numInt << endl << endl;
			cout << "V1+V2=" << v1I + v2I << endl;
			cout << "V1-V2=" << v1I - v2I << endl;
			cout << "V1*V2=" << v1I * v2I << endl << endl;
			cout << "V1*K=" << v1I * numInt << endl;
			break;
		case 2:
			system("cls");
			cout << "===========������ � ������������� �������=================" << endl;
			cout << "==========================================================" << endl;
			cout << "������� ������ ������ V1:" << endl; cin >> v1D;
			cout << "������� ������ ������ V2:" << endl; cin >> v2D;
			cout << "������� ������������ ����� K:" << endl; cin >> numDOU;
			system("cls");
			cout << "V1=" << v1D << endl;
			cout << "V2=" << v2D << endl;
			cout << "K=" << numDOU << endl << endl;
			cout << "V1+V2=" << v1D + v2D << endl;
			cout << "V1-V2=" << v1D - v2D << endl;
			cout << "V1*V2=" << v1D * v2D << endl << endl;
			cout << "V1*K=" << v1D * numDOU << endl;
			break;
		case 3:
			system("cls");
			cout << "������� ������ ������ V1:" << endl; cin >> v1R;
			cout << "������� ������ ������ V2:" << endl; cin >> v2R;
			cout << "������� ������������ ����� K:" << endl; cin >> numRAT;
			system("cls");
			cout << "V1=" << v1R << endl;
			cout << "V2=" << v2R << endl;
			cout << "K=" << numRAT << endl;
			cout << "V1+V2=" << v1R + v2R << endl;
			cout << "V1-V2=" << v1R - v2R << endl;
			cout << "V1*V2=" << v1R * v2R << endl;
			cout << "V1*K=" << v1R * numRAT << endl;
			break;
		case 0:
			cout << "EXIT EXIT EXIT EXIT" << endl;
			system("pause");
			break;
		}
	}
	system("pause");

}


