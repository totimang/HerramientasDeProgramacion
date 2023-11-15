#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdarg.h>


main()
{
	char tex[2];
	
	printf("Ingrese un si o no: \n");
	scanf("%2s", tex);                  //<---ARGUMENTO LIMITADOR %2s
	
	printf("El texto es: %s \n",tex);  //<---MUESTRA EL VALOR DE TEX
	system("PAUSE");                   //<---PAUSA
	 
}
