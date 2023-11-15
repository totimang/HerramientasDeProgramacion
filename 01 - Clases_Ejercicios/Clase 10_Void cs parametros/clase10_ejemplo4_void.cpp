#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

void asteriscos();
void descuento (float, float);
float valorf=0;

main()
{
	float valor, porc;
	
	cout << ("\n Ingrese un monto: ");
	cin >> valor;
	cout << ("\n Ingrese un porcentaje de descuento: ");
	cin >> porc;
	
	descuento (valor,porc); //Realizo el llamado a la funcion
	
	asteriscos; //Notan algun error?
	cout<<("\n Con el descuento del ")<<porc<<("% el valor a pagar es = ")<<valorf<<endl;
	asteriscos();
	system("PAUSE");
	return 0;
}

void descuento (float valor, float porc )
{
	valor = valor-((valor*porc)/100);//que valor utilizo
	printf("\n %f \n", valor); //aqui resuelve bien el valor
}

void asteriscos()
{
	cout <<"\n";
	for (int j=0; j < 40; j++)
	cout <<"*";
	cout <<"\n";
}
