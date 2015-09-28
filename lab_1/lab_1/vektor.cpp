#include "stdafx.h"
#include "Vector.h"
; using namespace std;
Vector::Vector()
{
	size = 0;
	mas = new int[size];

}
Vector::Vector(int size_, ...)
{
	mas = new int[size_];
	size = size_;
	int *m = &size_;
	m++;
	for (int i = 0; i<size; i++)
	{
		mas[i] = *m;
		m++;
	}
	lasterror = 0;
}
Vector::Vector(Vector&v)
{
	mas = new int[v.size];
	size = v.size;
	for (int i = 0; i < size; i++)
	{
		mas[i] = v.mas[i];
		
	}
	lasterror = 0;
}

Vector::~Vector()
{
	cout << "работает деструктор";
	delete[]mas;
}
int Vector::getsize()
{
	return size;
}
int Vector::getmas(int n)
{
	return  mas[n];
}
void Vector::setsize(int k)
{
	delete[]mas;
	mas = new int[k];
	size = k;
}
void Vector::setmas(int m, int c)
{
	mas[m] = c;
}
void Vector::sum(int h)
{
	for (int i = 0; i < size; i++)
	{
		mas[i] += h;
	}

}
void Vector::mult(int h)
{
	for (int i = 0; i < size;i++)
	mas[i] *= h;
}
void Vector::prov()
{
	for (int i = 0; i < size; i++)
	{
		if (mas[i] == 0)
		{ 
			print();
			return;
		}
	}
}
double Vector::mod()
{
	int l = 0;
	for (int i = 0; i < size; i++)
	{ 
		l += mas[i] * mas[i];
	}
	return sqrt(l);
}
int Vector::geterror()
{
	int b = lasterror;
	lasterror = no_error;
	return b;
}
void Vector::print()
{
	cout << "(";
	for (int i = 0; i<size; i++)
	{
		if (i != 0)  cout << ", ";
		cout << mas[i];
	}
	cout << ")" << endl;


}