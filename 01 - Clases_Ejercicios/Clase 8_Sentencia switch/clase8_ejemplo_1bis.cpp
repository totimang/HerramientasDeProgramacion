//agrego librerias
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;

//programa principal
int main()
{
	char cont;
	int a,b,c,min,max,op,SUMA,RESTA;
	
	printf("INTRODUZCA EL PRIMER NUMERO: ");
	scanf("%d",&a);
	printf("INTRODUZCA EL SEGUNDO NUMERO: ");
	scanf("%d",&b);
	system("cls");//limpia la pantalla
	
	menu:
		cout<<"\n-----MENU-----";
		cout<<"\n s-SUMA A+B";
		cout<<"\n r-RESTA A-B";
		cout<<"\n\n ELIJA SU OPCION ====> ";
		
		cin>>cont;//ingreso un valor para switch
		system ("cls");
		
		//uso la funcion switch para resolver
		switch(cont)
		{
			case 's':
			SUMA =a+b;
			printf("LA SUMA ES: %d \n\n" ,SUMA);
			break;
			
			case 'r':
			RESTA =a-b;
			printf("LA RESTA ES: %d \n\n" ,RESTA);
			break;
			
			default:
			printf(" %c  - NO es una opcion valida presione s(suma) o r (resta)",cont);
			goto menu;//me lleva a la linea 20 de codigo menu
		}
		
		system("PAUSE");
}
