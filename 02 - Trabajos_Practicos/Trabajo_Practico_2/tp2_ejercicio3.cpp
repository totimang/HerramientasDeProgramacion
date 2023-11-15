#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main()
{
	printf ("Integrantes:\nJuan_Cruz Baravalle\nBernardo_Emilio Pincione\nRodrigo_Damian Martinez\n");
	getchar();
	
	int a=0;
	
	printf("Ingrese un valor menor o igual a 60: \n");
	scanf("%d", &a);
	
	while (a>60)
	{
		printf("Ha ingresado %d \nPor favor ingrese un valor menor igual a 60: \n",a);
		scanf("%d", &a);
	}
	
	do
	{
		printf("El valor del contador ahora es: %d \n", a);
		a--;
	}while( a !=0 );
	
	system("PAUSE");
	return 0;
}
