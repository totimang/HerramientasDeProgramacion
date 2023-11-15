#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int main()
{
	string pal, linea;
	int a=0;
	bool buscando=true; //Flag para poder salir del while si encuentro la palabra
	char cadena[128];
	
	ifstream pa("palabras.txt"); //abro el archivo para buscar y compruebo si existe
	if (pa.fail())
	{
		cout << "El archivo no se pudo abrir." <<endl;
		system("Pause");
		exit(1);
	}
	
	getline(cin,pal); //Ingresamos la palabra a buscar dentro del archivo
	while (getline(pa,linea))
	{
		if(pal==linea)
		{
			cout<<"\nLa palabra ''"<<pal<<"'' ha sido encontrada."<<endl;
			a=1; //si la palabra ha sido encontrada a=1.
			break;
		}
	}
	//si no encontramos la palabra
	if(a==0) cout<<"\nLa Palabra ''"<<pal<<"'' NO ha sido encontrada."<<endl;
	pa.close(); //Cerramos el archivo pa.
	
	system("pause");
	return 0;
}
