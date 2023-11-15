#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int x1 = 10, x2 = 20, m = 2;
	bool b1, b2;
	b1 = x1 == x2; // false
	b2 = x1 < x2; // true
	
	cout << "b1 vale = " << b1 << "\n";
	cout << "b2 vale = " << b2 << "\n";
	bool b3 = true;
	
	if (b3) //TOMAMOS UNA DECISION SI ES VERDADERO O FALSO
		cout << "SI" << "\n";
	else
		cout << "NO" << "\n"; //<--Hay algo raro en esta lines?
		
	int x3 = false + 5 * m - b3;
	cout << x3;
	
	system("PAUSE");
	return 0;
}
