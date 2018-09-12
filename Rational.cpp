//Rational.cpp
#include <iostream> 
using namespace std;
#include "Rational.h"

Rational::Rational(double res) //конструктор для работы скалярного произведения.
{
	m = 0;
	n = 1;
}
void Rational::SetM(int _m)
{
	m = _m;
}
void Rational::SetN(int _n)
{
	n = _n;
}
int Rational::GetM()
{
	return m;
}
int Rational::GetN()
{
	return n;
}
void Rational::print()
{
	if (m == 0)
	{
		cout << m << endl;
	}
	else
		cout << m << "/" << n << endl;
}
Rational::Rational(int _m, int _n)
{
	m = _m;
	n = _n;
}
bool Rational::srv(Rational b)
{
	Sokr();
	b.Sokr();
	if (m == b.m&&n == b.n)
		return true;
	else
		return false;

}
Rational::Rational()
{
	m = 0;
	n = 1;
}
void Rational::Sokr()
{
	int tm, tn;
	tm = abs(m);
	tn = abs(n);

	if (tm != 0 && tn != 0)
	{
		while (tm != tn)
		{
			if (tm > tn)
				tm -= tn;
			else
				tn -= tm;
		}
		m /= tm;
		n /= tn;
	}
}
void Rational::operator+=(Rational b)
{
	m = m * b.n + b.m*n;
	n = n * b.n;
	Sokr();
}
void Rational::operator=(Rational b)
{
	m = b.m;
	n = b.n;
	Sokr();
}
void Rational::operator-=(Rational b)
{
	m = m * b.n - b.m*n;
	n = n * b.n;
	Sokr();
}
void Rational::operator*=(Rational b)
{
	m = m * b.m;
	n = n * b.n;
	Sokr();
}
void Rational::operator/=(Rational b)
{
	m = m * b.n;
	n = n * b.m;
	Sokr();
}
void Rational::operator=(int b)
{
	m = b;
	n = 1;
	Sokr();
}
void Rational::operator+=(int b)
{
	m = m + b * n;
	Sokr();
}
void Rational::operator-=(int b)
{
	m = m - b * n;
	Sokr();
}
void Rational::operator*=(int b)
{
	m = m * b;
	Sokr();
}
void Rational::operator/=(int b)
{
	n = n * b;
	Sokr();
}
Rational Rational ::operator+(Rational b)
{
	Rational c;
	c.m = m * b.n + b.m*n;
	c.n = n * b.n;
	c.Sokr();
	return c;
}
Rational Rational ::operator-(Rational b)
{
	Rational c;
	c.m = m * b.n - b.m*n;
	c.n = n * b.n;
	c.Sokr();
	return c;
}
Rational Rational ::operator*(Rational b)
{
	Rational c;
	c.m = m * b.m;
	c.n = n * b.n;
	c.Sokr();
	return c;
}
Rational Rational ::operator/(Rational b)
{
	Rational c;
	c.m = m * b.n;
	c.n = n * b.m;
	c.Sokr();
	return c;
}
Rational Rational ::operator+(int b)
{
	Rational c;
	c.m = m + b * n;
	c.n = n;
	c.Sokr();
	return c;
}
Rational Rational ::operator-(int b)
{
	Rational c;
	c.m = m - b * n;
	c.n = n;
	c.Sokr();
	return c;
}
Rational Rational ::operator*(int b)
{
	Rational c;
	c.m = m * b;
	c.n = n;
	c.Sokr();
	return c;
}
Rational Rational ::operator/(int b)
{
	Rational c;
	c.m = m;
	c.n = n * b;
	c.Sokr();
	return c;
}
