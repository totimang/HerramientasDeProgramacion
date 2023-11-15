//Agrego librerias
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<iostream>
using namespace std;

main()
{
	int n;
	
	//Muestra solo el valor 5 para los demas realiza un continue
	for (int i = 0; i < 10; i++) {
		if (i != 5) continue;
		cout << i << " ";
	}
	
	cout <<"\n\n";
	
	//Otro ejemplo:
	cout<<"Ingrese un valor de 1 a 10: \n";
	cin>>n;
	
	while (n>11 || n<1) //Compruebo que el valor se encuentre entre 1 y 10.
	{
		cout<<"El valor ingresado es incorrecto ingrese un valor de 1 a 10: \n";
		cin>>n;
	}
	
	for(n; n<11; n++) //Inicio el bucle en el numero ingresado.
	{
		if(n==3 || n==5 || n==7)
		continue;
		printf("Usted ha ingresado : %d \n",n);
	}
	
	
	system("Pause");
}
