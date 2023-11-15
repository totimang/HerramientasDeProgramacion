#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdarg.h>


main ()
{
	char tex[2];
	
	printf("Ingrese un si o no: \n");
	scanf("%s", &tex);                 //<---INGRESO LA CADENA DE CARACTERES
	
	printf("El texto es: %s \n",tex);  //<---MUESTRA EL VALOR DE TEX
	system("PAUSE");                   //<---PAUSA
	
}
