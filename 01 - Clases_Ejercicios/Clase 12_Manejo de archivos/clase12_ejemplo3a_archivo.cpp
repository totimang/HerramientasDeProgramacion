#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int main()
{
	ofstream archivo;
	archivo.open("datos.txt",ios::app); //ios:app ME PERMITE AGREGAR DATOS
	archivo << "Pero si utilizo" << endl;
	archivo << " ios::app " << endl;
	archivo << "puedo agregar datos" << endl;
	archivo.close(); //CIERRO EL ARCHIVO PARA LUEGO PODER LEERLO
	
	char cadena[128];
	long fin=0L;
	ifstream archivo1("datos.txt");
	if (archivo.fail())
	{
		cout << "\nEl archivo no se pudo abrir."<<endl;
		system("pause");
		exit(1);
	}
	while(!archivo1.eof())
	{
		archivo1.getline(cadena, sizeof(cadena));
		cout << cadena << endl;
		if((++fin %24)==0)
		{
			cout<<"SIGUIENTE LINEA -->";
			cin.get();
		}
	}
	
	system("pause");
	return 0;
}
