#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

void asteriscos(); //funcion para generar *

main()
{
	int contco, contdp, contot;
	char d,c='s';
	contco = 0; //contador de comas
	contdp = 0; //contador de dos puntos
	contot = 0; //contador de otros
	
	while (c != 'n')
	{
		printf("Ingrese el , : o caracter: \n");
		cin>>d;
		{switch (d)
			{
				case ',':
					contco++;break; //si es coma
				case ':':
					contdp++;break; //si es dos puntos
				default:
					contot++; //si es otro caracter
			}
		}
		printf("Desea continuar?: ");
		cin>>c;
	}
	
	
	//salida de pantalla
	asteriscos();
		cout <<" \n           Cantidad de comas: " << contco ;
	asteriscos();
		cout <<" \n        Cantidad de dos puntos: " << contdp ;
	asteriscos();
		cout <<" \n   Cantidad de otros caracteres: " << contot ;
	asteriscos();
	
	system("PAUSE");
}

//CREO LA FUNCION asteriscos
void asteriscos()
{
	cout <<"\n";
	for (int j=0; j < 40; j++)
	cout <<"*";
	cout <<"\n";
}
