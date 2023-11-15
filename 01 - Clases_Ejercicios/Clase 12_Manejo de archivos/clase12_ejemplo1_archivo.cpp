#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;


int main()
{
	//crea unn objeto ofstream "archivo" que coloca los datos en "datos.txt"
	ofstream archivo;
	
	archivo.open("datos.txt"); //si el archivo no existe creo "datos.txt"
	archivo << "Primera linea de texto" << endl;
	archivo << "Segunda linea de texto" << endl;
	archivo << "Tercera linea de texto" << endl;
	archivo << "Prueba sin ";
	archivo << "endl en el medio" << endl;
	archivo.close(); //Cierro el archivo para luego poder leerlo
	
	return 0;
}
