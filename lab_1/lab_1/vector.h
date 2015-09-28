#pragma once
#include<iostream>
class Vector
{
	int size;
	int *mas;
	int lasterror;
public:
	Vector();
	Vector(int size, ...);
	Vector(Vector&v);
	~Vector();
	int getsize();
	int getmas(int n);
	void setsize(int k);
	void setmas(int m, int c);
	void print();
	void sum(int h);
	void mult(int h);
	double mod();
	void prov();
	static enum { no_error, memory_limit, exit_array };
	int geterror();
}