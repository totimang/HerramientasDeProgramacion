#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;                                //<---importante ver aclaracione al del ejercicio

main()

{
	
	int a =0, b = 0, s = 0;                         //<--inicializar las variables
	
	printf("Valor de a = %d y b = %d ",a,b);       //<---muestra por pantalla
	s = a + b;                                     //<---suma
	printf("La suma es: %d \n\n", s);              //<---muestra por pantalla
	
	system("PAUSE");                               //<---agregamos una pausa libreria stdlib
	
	cout<<"Ingrese un valor nuevo para a: \n";  //<---muestra por pantalla usando COUT de la libreria stdlib
	cin>>a;                                    //<---leer desde el teclado el valor de a utilizando CIN de la libreria stdlib
	cout<<"Ingrese un valor nuevo para b: \n";
	cin>>b;
	cout<<"ahora a vale: "<<a <<" y b vale: " <<b;
	s = a + b;
	cout<<"\n\n la suma es: "<<s;
	getchar();
	getchar();
	  
}
