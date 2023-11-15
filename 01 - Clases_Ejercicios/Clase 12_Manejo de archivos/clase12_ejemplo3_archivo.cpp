#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int main()
{
	ofstream archivo;
	archivo.open("datos.txt"); //Ojo sobreescribo "datos.txt"
	archivo << "Ahora cambie " << endl;
	archivo << "lo que habia escrito " << endl;
	archivo << "en el archivo datos.txt" << endl;
	archivo.close(); //Cierro el archivo para luego poder leerlo
	
	//Observo lo que hay en el archivo
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
