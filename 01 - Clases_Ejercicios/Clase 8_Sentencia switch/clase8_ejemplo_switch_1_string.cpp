//agrego librerias
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;

//programa principal
int main()
{
	string sele;
	int a,b,c,min,max,op,SUMA,RESTA;
	
	printf("INTRODUZCA EL PRIMER NUMERO: ");
	scanf("%d",&a);
	printf("INTRODUZCA EL SEGUNDO NUMERO: ");
	scanf("%d",&b);
	system("cls");//limpia la pantalla
	
	menu:
		cout<<"\n-----MENU-----";
		cout<<"\n SUMA A+B";
		cout<<"\n RESTA A-B";
		cout<<"\n\n ELIJA SU OPCION ====> ";
		cin>>sele;
		
		enum cont{invalido,suma,resta};
		cont sel;
		
		//asigno el valor a sel utilizando un if
		if(sele=="suma"){sel=suma;}
		else if(sele=="resta"){sel=resta;}
		else{sel=invalido;}
		
		system ("cls");
		
		//uso la funcion switch para resolver
		switch(sel)
		{
			case 1:
			SUMA =a+b;
			printf("LA SUMA ES: %d \n\n" ,SUMA);
			break;
			
			case 2:
			RESTA =a-b;
			printf("LA RESTA ES: %d \n\n" ,RESTA);
			break;
			
			default:
			printf("''%d'' NO es una opcion valida presione 1 o 2",op);
			goto menu;//me lleva a la linea 20 de codigo menu
		}
		
		system("PAUSE");
}
