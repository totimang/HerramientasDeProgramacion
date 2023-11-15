#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

#define t 2


int main()
{ int i, j;
	struct alumno
	{
		char nombre[20];
		char apellido[20];
		int edad;
		int anio;
		int nota[4];
		float promedio;
	}reg[t];
	
	strcpy(reg[0].nombre, "Rodrigo Damian"); //Notese el uso de la funcion strcpy para poder
	strcpy(reg[0].apellido, "Martinez");      //asignar datos string a la estructura char
	reg[0].edad = 34;
	reg[0].anio = 2;
	
	
	for (i=1; i<t; i++)
	{
		reg[i].promedio = 0;
		printf (" ---Informacion del alumno N° %d\n\n--- ", i+1);
		printf ("Ingrese el nombre del alumno (menor a 20 letras)..... : ");
		scanf("%s",&reg[i].nombre[0]);
		printf ("Ingrese el apellido del alumno (menor a 20 letras)..... : ");
		scanf("%s",&reg[i].apellido[0]);
		printf ("Ingrese la edad del alumno ............................ : ");
		scanf("%s",&reg[i].edad);
		printf ("Ingrese el año que cursa el alumno .................... : ");
		scanf("%s",&reg[i].anio);
		
		for (j=0; j<4; j++)
		{
			fflush(stdin); //Limpio el buffer de entrada
			printf ("Ingrese la nota N° %d de este alumno............ : ", j+1);
			scanf ("%d",&reg[i].nota[j]);
			reg[i].promedio = reg[i].promedio + reg[i].nota[j];
		}
		
		reg[i].promedio = reg[i].promedio /4;
		
		
		system("CLS");
	}
	
	for (i=0; i<t; i++)
	{
		printf ("\n\nEl alumno \"%s %s\" ", reg[i].nombre, reg[i].apellido);
		printf ("que tiene %d anios y cursa el anio %d de la carrera,\n", reg[i].edad, reg[i].anio);
		printf ("tiene promedio %.2f, por tener las notas: ", reg[i].promedio);
		printf ("'%d' '%d' ", reg[i].nota[0], reg[i].nota[1]);
		printf ("'%d' '%d' \n\n", reg[i].nota[2], reg[i].nota[3]);
	}
	
	system("PAUSE");
	return 0;
}
