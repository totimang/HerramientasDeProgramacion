#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int main()
{
	char cadena[128];
	long fin=0L;
	ifstream texto("datos.txt");
	
	if (texto.fail())
	{
		cout << "\nEl archivo no se pudo abrir."<<endl;
		system("pause");
		exit(1);
	}
	
	while(!texto.eof()) //Recorro texto hasta el EOF
	{
		texto.getline(cadena, sizeof(cadena));
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
