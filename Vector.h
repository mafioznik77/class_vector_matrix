//Vector.h
#pragma once
#include <iostream>
using namespace std;
template <class T>


class Vector
{
	int size;
	T *mas;
public:
	// онструкторы
	Vector <T>(int size = 3);
	~Vector <T>();
	Vector <T>(const Vector &b);
	//ѕерегрузки
	Vector operator+(const Vector<T> y);
	Vector operator-(const Vector <T> &y);
	Vector operator*(const T a);
	Vector& operator=(const Vector<T> &y);
	T& operator[](int i);
	T operator*(const Vector<T> &y);//скал. произв
	void  operator+=(const Vector<T> &y);
	void operator-=(const Vector <T> &y);
	void operator*=(const T a);
	//
	void resize(int rresize);
	//вывод в поток
	friend  ostream & operator<<(ostream& OS, const Vector<T> &y)
	{
		for (int i = 0; i < y.size; i++)
			OS << y.mas[i] << " ";
		OS << endl;
		return OS;
	}
	//ввод из поток
	friend istream & operator>>(istream& OS, Vector<T> &y)
	{
		int strsize;
		OS >> strsize;
		if (y.size != strsize)
		{
			delete[] y.mas;
			y.size = strsize;
			y.mas = new T[strsize];
		}
		for (int i = 0; i < y.size; i++)
			OS >> y.mas[i];
		return OS;
	}
};

template <class T> Vector<T>::Vector(int n)
{
	size = n;
	mas = new T[size];
	for (int i = 0; i < n; i++)
		mas[i] = 0;
}
template <class T> Vector <T>::~Vector()
{
	delete[] mas;
}
template <class T> Vector <T>::Vector(const Vector<T> &b)
{
	size = b.size;
	mas = new T[size];
	for (int i = 0; i < size; i++)
		mas[i] = b.mas[i];
}
template <class T> Vector <T> Vector <T>::operator+(const Vector<T> y)
{
	Vector<T> res(size);
	for (int i = 0; i < size; i++)
	{
		res.mas[i] = mas[i] + y.mas[i];
	}
	return res;
}
template <class T> Vector <T> Vector <T> ::operator-(const Vector <T> &y)
{
	Vector <T> res(size);
	for (int i = 0; i<size; i++)
		res.mas[i] = mas[i] - y.mas[i];
	return res;
}
template <class T> Vector <T> Vector <T> ::operator*(const T a)
{
	Vector <T> res(size);
	for (int i = 0; i < size; i++)
		res.mas[i] = mas[i] * a;
	return res;
}

template <class T> Vector<T>& Vector<T>::operator=(const Vector<T> &y)
{
	if (size != y.size)
	{
		delete[]mas;
		size = y.size;
		mas = new T[size];
	}
	for (int i = 0; i < size; i++)
		mas[i] = y.mas[i];
	return *this;
}
template <class T> T& Vector <T>::operator[](int i)
{
	return mas[i];
}
template <class T> T Vector <T>::operator*(const Vector<T> &y) //—кал¤рное произведение 
{
	T res = 0.0;
	for (int i = 0; i < size; i++)
		res += mas[i] * y.mas[i];
	return res;
}
template <class T> void Vector <T> :: operator+=(const Vector<T> &y)
{
	for (int i = 0; i < size; i++)
		mas[i] += y.mas[i];
}
template <class T> void Vector <T> ::operator-=(const Vector<T> &y)
{
	for (int i = 0; i<size; i++)
		mas[i] -= y.mas[i];
}
template <class T> void Vector <T> ::operator*=(const T a)
{
	for (int i = 0; i < size; i++)
		mas[i] *= a;
}
template <class T> void Vector <T>::resize(int rresize)
{
	T* masCopy = new T[size];
	for (int i = 0; i < size; i++)
		masCopy[i] = mas[i];
	delete[] mas;
	mas = new T[rresize];
	if (size < rresize)
	{
		for (int i = 0; i < size; i++)
			mas[i] = masCopy[i];
		for (int i = size; i < rresize; i++)
			mas[i] = 0;
	}
	else
		for (int i = 0; i < rresize; i++)
		{
			mas[i] = masCopy[i];
		}
	size = rresize;
	delete[] masCopy;
}