#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main()
{
	int a=0;
	
	printf("Ingrese un valor menor o igual a 20: \n");
	scanf("%d", &a);
	
	while (a>20)
	{
		printf("Ha ingresado %d \nPor favor ingrese un valor menor igual a 20: \n",a);
		scanf("%d", &a);
	}
	
	do
	{
		printf("El valor del contador ahora es: %d \n", a);
		a = a + 1;
	}while( a <= 20 );
	
	system("PAUSE");
	return 0;
}
