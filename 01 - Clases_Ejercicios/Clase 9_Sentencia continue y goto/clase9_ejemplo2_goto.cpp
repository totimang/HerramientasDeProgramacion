#include <stdlib.h>
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;

main()
{
	char cont;
	int a,b,c,sum,res,op;
	printf("Introduzca el primer numero: ");
	scanf("%d",&a);
	printf("Introduzca el segundo numero: ");
	scanf("%d",&b);
	system("cls");
	
	menu:
		cout<<"\n---MENU---";
		cout<<"\n   1.SUMA";
		cout<<"\n   2.RESTA";
		cout<<"\n\nELIJA SU OPCION ====> ";
		cin>>op;
		system ("cls");
		switch(op)
		{
			case 1:
			printf("LA SUMA ES: %d\n" ,sum=a+b);
			break;
			
			case 2:
			printf("LA RESTA ES: %d\n" ,res=b-a);
			break;
			
			default:
			printf("LA OPCION %d NO ES CORRECTA\n" ,op);
			goto menu;
			break;
		}
		
		printf("\n\n Si desea realizar otra operacion presione s: ");
		cin.ignore();
		cont=cin.get();
		if (cont=='s')
		goto menu; //utilizamos el goto para ir al menu (linea 19)
}
