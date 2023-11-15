#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	string n[5];
	int x;
	
	//primer bucle for para cargar los datos al array n
	for(x=0; x<=4; x++)
	{
		printf ("Ingrese un valor: \n");
		cin >> std::ws;//limpiamos el buffer del ingreso por teclado
		getline(cin,n[x]);//asignamos el valor al arreglo n
	}
	
	printf("\n\n");
	
	//segundo bucle mostrar los datos cargados de atras para adelante
	for(x=4; x>=0; x--)
	{
		cout<<"El n"<<x+1<<" contiene: "<<n[x]<<endl;
	}
	
	system("Pause");
	
	return 0;
}
