#include <stdlib.h>
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;


int main(){

printf ("Integrantes:\n\nJuan Cruz Baravalle\nBernardo Emilio Pincione\nRodrigo Damian Martinez\n");
	getchar();

int a, b, c, s,r,d,m, op, cont, i,e, t, salir;

ingresar:
cout<<"INGRESAR VALORES \n";
printf("Ingrese el primer valor: ");
scanf("%d", &a);
printf("Ingrese el segundo valor: ");
scanf("%d", &b);

menu:
	cout<<"-----MENU-----";
	cout<<"\n 1.SUMAR";
	cout<<"\n 2.RESTAR";
	cout<<"\n 3.MULTIPLICAR";
	cout<<"\n 4.DIVIDIR";
	cout<<"\n 5.SALIR";
	cout<<" \n ELIJA UNA OPCION ====>  ";
	cin>>op;
	
switch(op){
	case 1: s=a+b;
	printf("La suma de los numeros ingresados es: %d \n", s);
	break;
	case 2: r=a-b;
	printf("La resta de los numeros ingresados es: %d \n", r);
	break;
	case 3: m=a*b;
	printf("La multiplicacion de los numeros ingresados es: %d \n", m);
	break;
	case 4: d=a/b;
	printf("La division de los numeros ingresados es: %d \n", d);
	break;
	case 5: salir=e;
	exit(-1);
	
	break;
	default:
	printf("La opcion no es correcta \n", op);
	printf("VUELVA A INGRESAR UNA OPCION \n");
	goto menu;
	break;
}	


  	printf("Si desea realizar otra operacion presione c, sino presione i para volver al inicio. \n: ");
  	cin.ignore();
	cont=cin.get();
	if(cont=='c')
	goto menu;
	else if(cont==i)
	cout<<e<<endl;
	main();


system("pause");	
}
