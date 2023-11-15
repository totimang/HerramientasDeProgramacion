#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

#define t 2
using namespace std;

int main()
{
	int a, v, i, j;
	string test;
	
	struct alumno
	{
		char nombre[20];
		char apellido[20];
		int edad;
		int anio;
		int nota[4];
		float promedio;
	}reg[t];
	
	for (i=0; i<t; i++)
	{
		reg[i].promedio = 0;
		printf (" ---Informacion del Alumno Nº %d\n\n--- ", i+1);
		fflush(stdin);
		printf ("Ingrese el Nombre del alumno (menor a 20 letras)..... : ");
		cin.getline(reg[i].nombre,20,'\n');//Utilizo cin.getline para poder capturar todo el texto ingresado hasta 20 chars y lo asigno a nombre
		
		
		
		printf ("Ingrese el apellido del alumno (menor a 20 letras)... :");
		cin.getline(reg[i].apellido,20,'\n');
		
		printf("Ingrese la edad del alumno............................ :");
		scanf ("%d",&reg[i].edad);
		printf ("Ingrese el año que cursda el alumno.................. :");
		scanf ("%d",&reg[i].anio);
		
		for (j=0; j<4; j++)
		{
			fflush(stdin); //Limpio el buffer de entrada
			printf ("Ingrese la nota Nº %d de este alumno............ :", j+1);
			scanf ("%d",&reg[i].nota[j]);
			reg[i].promedio = reg[i].promedio /4;
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
		printf ("'%d '%d'' \n\n", reg[i].nota[2], reg[i].nota[3]);
	}
	
	system("PAUSE");
	return 0;
}
