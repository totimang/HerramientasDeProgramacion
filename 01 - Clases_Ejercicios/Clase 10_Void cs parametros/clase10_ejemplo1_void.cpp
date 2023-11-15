#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

void calculomh(); //declaro la funcion VOID.
int minutos, hora; //declaro las variables "GLOBALES".

int main()
{
	cout<<"Ingrese los minutos: ";
	cin>>minutos;
	calculomh(); //llamada a la funcion CALCULOMH.
	printf("\nSon horas/s: %d:%02d \n\n",hora,minutos);
	system("PAUSE");
	return 0;
}

void calculomh()
{
	hora = minutos/60; //calcula cuantas horas representan los minutos ingresados.
	minutos = minutos%60; //calcula el modulo de minutos (es decir lo que resta de la division).
}
