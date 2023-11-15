//agrego librerias
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<iostream>
using namespace std;

main()
{
	int n;
	for (n = 1; n <=30; n++)
	{
		if (n % 5 == 0) //si n es multiplo de 5, siguiente interación
		{
			printf("_ "); //esta linea al estar antes de continue se ejecuta
			continue;
			printf("ESTE TEXTO NO APARECE"); //Una vez ejecutado continue no
			printf("TAMPOCO ESTE TEXTO");    //se ejecuta ninguna otra orden.
		}
		printf("%d ", n);
	}
	printf("\n\nPrograma terminado se mostraron los numeros NO multiplos de 5 \n\n");
	system("Pause");
}
