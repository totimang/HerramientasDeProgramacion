#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{	
	int a = 10, *p, *q;
	
	p = &a;	
	q = p; //la direccion que contiene "p" se asigna a "q"
	
	printf("En la direccion %4X esta el valor de %d\n", p, *p);
	printf("En la direccion %4X esta el valor de %d\n", q, *q);
	
	system("PAUSE");
	return 0;
}
