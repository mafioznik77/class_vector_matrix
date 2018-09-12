#pragma once
#include "Vector.h"
#include <iostream>
using namespace std;

template <class T>
class matrix {
	int size;
	Vector<T> *matr;
public:
	matrix(int n = 5);
	matrix<T>(const matrix<T> &b);
	~matrix<T>() 
	{ 
		delete[] matr; 
	}
	matrix<T>& operator = (const matrix<T> &b);
	Vector<T>& operator [](int i)
	{
		return matr[i];
	}

};

template<class T>
matrix<T>::matrix(int n) 
{
	size = n;
	matr = new Vector<T>[size];
	Vector<T> V[size];
	for (int i = 0; i < size; i++)
		matr[i] = V;
}

template<class T>
matrix<T>::matrix(const matrix<T> &b) 
{
	size = b.size;
	matr = new Vector<T>[size];
	for (int i = 0; i < size; i++)
		matr[i] = b.matr[i];
}

template<class T>
matrix<T>& matrix<T>::operator=(const matrix<T> &b)
{
	if(size != b.size)
	{
		delete[] matr;
		size = b.size;
		matr = new Vector<T>[size];
	}

	for (int i = 0; i < size; i++)
		matr[i] = b.matr[i];
	return *this;
}

