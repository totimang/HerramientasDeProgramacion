#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int main()
{
	//la siguiente linea declara las variables enteras a y b, y los punteros p y q a enteros
	
	int a = 10, b, *p, *q;
	
	q = &a; //asigna la direccion de "a", a la variable q
	
	b = *q; //asigna a la variable "b" el valor donde apunta "q" que es "a"
	
	*p = 20; //error: asignacion no valida
			//noten el ERROR es ¿a donde apunta p?
			
	printf("En la direccion %.4X esta el dato %d \n", q, b);
	printf("En la direccion %.4X esta el dato %d \n", p, *p);
	
	system("PAUSE");
	return 0;
}
