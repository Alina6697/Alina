// lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Vector.h"
;

void main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	using namespace std;
	int k,l;
	const int SIZE = 10;
	Vector mas[SIZE];
	for (int i = 0; i<SIZE; i++)
	{
		int n;
		n = rand() % 5 + 1;
		mas[i].setsize(n);
		for (int j = 0; j<n; j++)
		{
			int l = rand() % 21 - 10;
			mas[i].setmas(j, l);
		}
		mas[i].print();
	}

	cout << "vvedite chislo: ";
	cin >> k;
	cout << "vvedite nomer vektora:";
	cin >> l;
	 l--;
	 mas[l].print();
	 cout << " + " << k << " = ";
	 mas[l].sum(k);
	 mas[l].print();

	 cout << "vvedite chislo: ";
	 cin >> k;
	 cout << "vvedite nomer vektora:";
	 cin >> l;
	 l--;
	 mas[l].print();
	 cout << " * " << k << " = ";
	 mas[l].mult(k);
	 mas[l].print();

	 for (int i = 0; i < SIZE; i++)
	 {
		 mas[i].prov();
	 }

	 double g;
	 int o;
	 g = mas[0].mod();
	 o = 0;
	 for (int i = 1; i < SIZE; i++)
	 {
		 double p = mas[i].mod();
		 if (p < g)
		 {
			 g = p;
			 o = i;
		 }
	 }
	 mas[o].print();
	 cout << "mod= " << g<<endl;
	 cout << "_____";
	 Vector *n = new Vector();
	 delete n;
}


