#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int main()
{
	//la siguiente linea declara las variables enteras a y b, y los punteros p y q a enteros
	
	int a = 10, b, *p, *q, c = 20;
	
	q = &a; //asigna la direccion de "a", a la variable q
	
	b = *q; //asigna a la variable "b" el valor donde apunta "q" que es "a"
	
	p = &c; //ya no hay error
			
	printf("En la direccion %X esta el dato %d \n", q, b);
	printf("En la direccion %X esta el dato %d \n", p, *p);
	
	system("PAUSE");
	return 0;
}
