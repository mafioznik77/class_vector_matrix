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
		cout << "==============Âûáåðèòå ïóíêò=======================" << endl;
		cout << "===================================================" << endl;
		cout << "[1]-ÐÀÁÎÒÀ Ñ ÖÅËÛÌÈ ×ÈÑËÀÌÈ========================" << endl;
		cout << "===================================================" << endl;
		cout << "[2]-ÐÀÁÎÒÀ Ñ ÂÅÙÅÑÒÂÅÍÍÛÌÈ ×ÈÑËÀÌÈ=================" << endl;
		cout << "===================================================" << endl;
		cout << "[3]-ÐÀÁÎÒÀ Ñ ÐÀÖÈÎÍÀËÜÍÛÌÈ ×ÈÑËÀÌÈ=================" << endl;
		cout << "===================================================" << endl;
		cin >> change;
		switch (change)
		{
		case 1:
			system("cls");
			cout << "===========ÐÀÁÎÒÀ Ñ ÖÅËÛÌÈ ×ÈÑËÀÌÈ=================" << endl;
			cout << "===================================================" << endl;
			cout << "ÂÂÅÄÈÒÅ ÏÅÐÂÛÉ ÂÅÊÒÎÐ V1:" << endl; cin >> v1I;
			cout << "ÂÂÅÄÈÒÅ ÏÅÐÂÛÉ ÂÅÊÒÎÐ V2:" << endl; cin >> v2I;
			cout << "ÂÂÅÄÈÒÅ ÖÅËÎÅ ×ÈÑËÎ K:" << endl; cin >> numInt;
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
			cout << "===========ÐÀÁÎÒÀ Ñ ÂÅÙÅÑÒÂÅÍÍÛÌÈ ×ÈÑËÀÌÈ=================" << endl;
			cout << "==========================================================" << endl;
			cout << "ÂÂÅÄÈÒÅ ÏÅÐÂÛÉ ÂÅÊÒÎÐ V1:" << endl; cin >> v1D;
			cout << "ÂÂÅÄÈÒÅ ÂÒÎÐÎÉ ÂÅÊÒÎÐ V2:" << endl; cin >> v2D;
			cout << "ÂÂÅÄÈÒÅ ÂÅÙÅÑÒÂÅÍÍÎÅ ×ÈÑËÎ K:" << endl; cin >> numDOU;
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
			cout << "ÂÂÅÄÈÒÅ ÏÅÐÂÛÉ ÂÅÊÒÎÐ V1:" << endl; cin >> v1R;
			cout << "ÂÂÅÄÈÒÅ ÂÒÎÐÎÉ ÂÅÊÒÎÐ V2:" << endl; cin >> v2R;
			cout << "ÂÂÅÄÈÒÅ ÐÀÖÈÎÍÀËÜÍÎÅ ×ÈÑËÎ K:" << endl; cin >> numRAT;
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


