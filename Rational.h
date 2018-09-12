//Rational.h
#pragma once
#include <iostream>
using namespace std;

class Rational
{
	int m;
	int n;
public:
	Rational(double d);
	void SetM(int _m);
	void SetN(int _n);
	int GetM();
	int GetN();
	void print();
	Rational();
	Rational(int _m, int _n);
	bool srv(Rational b);
	void Sokr();
	void operator+=(Rational b);
	void operator-=(Rational b);
	void operator*=(Rational b);
	void operator/=(Rational b);
	void operator+=(int b);
	void operator-=(int b);
	void operator*=(int b);
	void operator/=(int b);
	void operator=(int b);
	void operator=(Rational b);
	Rational operator+(Rational b);
	Rational operator-(Rational b);
	Rational operator*(Rational b);
	Rational operator/(Rational b);
	Rational operator+(int b);
	Rational operator-(int b);
	Rational operator*(int b);
	Rational operator/(int b);
	friend istream & operator >>(istream & os, Rational &num)
	{
		os >> num.m >> num.n;
		return os;
	}
	friend ostream & operator <<(ostream &os, const Rational & num)
	{
		if (num.n != 1)
			os << num.m << "/" << num.n;
		else
			os << num.m;
		return os;
	}
};