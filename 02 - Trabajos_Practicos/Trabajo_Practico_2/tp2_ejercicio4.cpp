#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


main()
{
	printf ("Integrantes:\nJuan_Cruz Baravalle\nBernardo_Emilio Pincione\nRodrigo_Damian Martinez\n");
	getchar();
	
	char car='s';//inicializo la variable con el valor 's'
	int a=0, b=0, c=0;//inicializo las variables en 0
	for(int a=2;a<=100;a+=2)

	
	while (car=='s')
	{
		printf("Ingrese un  numero par: ");
		scanf("%d", &a);
		printf("Ingrese otro numero par: ");
		scanf("%d", &b);
		
		c=a+b;
		printf("El total de los valores %d + %d es: %d \n\n",a,b,c);
		
		printf("¿Desea continuar? ingrese si(s) o no(n): ");
		cin>>car;
		
		//utilizamos el while para verificar que el valor ingresado sea 's' o 'n'
		while (car != 's' && car != 'n')
		{
			printf("\n Por favor ingrese s/n (si o no) ");
			cin>>car;
		}
	}
	
	system("PAUSE");
	return 0;
}
