//agrego librerias
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;

//programa principal
int main()
{
	printf ("Integrantes:\n\nJuan Cruz Baravalle\nBernardo Emilio Pincione\nRodrigo Damian Martinez\n");
	getchar();
	
	char letra;

	
	let:
	printf("INTRODUZCA UNA LETRA de la 'a' a la 'd': ");
	scanf("%c",&letra);
	system("cls");//limpia la pantalla
	
	//uso la funcion switch para resolver
	switch(letra)
	{
		case 'a': case 'A':
		printf("Ha escrito la letra %c de Adictivo \n\n" ,letra);
		break;
		
		case 'b': case 'B':
		printf("Ha escrito la letra %c de Barco \n\n" ,letra);
		break;
		
		case 'c': case 'C':
		printf("Ha escrito la letra %c de Castillo \n\n" ,letra);
		break;
		
		case 'd': case 'D':
		printf("Ha escrito la letra %c de Dragon \n\n" ,letra);
		break;
		
		default:
		printf("La letra asignada no es la letra habilitada, por favor ingrese a, b, c, o d: \n\n");
		goto let;//me lleva a la linea 13 de codigo menu:
		break;					
	}
	
	
	printf("\n\nSi desea volver a ingresar una letra presione 's', sino presiones 'n' para finalizar: ");
	cin.ignore();
	letra=cin.get();
	if (letra=='s')
	goto let; //me lleva a la linea 42, pero deberia ser a la linea 17
	
	//system("pause");
	//return 0;
}
