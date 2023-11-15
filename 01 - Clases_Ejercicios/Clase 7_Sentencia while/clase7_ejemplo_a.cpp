#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


main()
{
	char car;
	
	printf("¿Desea continuar? ingrese si(s) o no(n): ");
	car = getchar();//utilizamos getchar para capturar lo ingresado por teclado
	
	//utilizamos el while para verificar que el valor ingresado sea 's' o 'n'
	while (car != 's' && car != 'n')
	{
		printf("\n Por favor ingrese s/n (si o no)");
		car = getchar();
	}
	
	system("PAUSE");
	return 0;
}
