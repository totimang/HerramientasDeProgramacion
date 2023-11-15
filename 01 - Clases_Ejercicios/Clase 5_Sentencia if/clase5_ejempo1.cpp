#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

main()
{
	int a;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	
	if(a<=12)//si el número es menor ó igual a 12, realizara lo siguiente:
	{
		a--;//resta 1 unidad al valor asigano.
		a*=10;//multiplica por 10 el valor anterior.
	}
	else //pero si un número no es menor que 12, entonces realizara lo siguiente:
	{
		a*=10;//multiplica por 10 el valor asignado.
		a++;//suma 1 unidad al resultado anterior.
	}
	printf("El resultado es: %d \n",a);
	
	system("PAUSE");
}
