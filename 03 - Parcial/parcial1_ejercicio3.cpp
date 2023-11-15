#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <windows.h>
using namespace std;


int menu(){
	int x;
	system("cls");
	cout<<"----------Bienvenido----------"<<endl;
	cout<<"1. Agregar persona"<<endl;
	cout<<"2. Ver personas"<<endl;
	cout<<"3. Buscar personas"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Opcion ";
	cin>>x;
	return x;
}

bool verifica(string dni){
	ifstream leer("datos.txt", ios::in);
	string Nom;
	string Dni;
	string Ape;
	leer>>Nom;
	while(!leer.eof()){
		leer>>Ape;
		leer>>Dni;
		if(Dni == dni){
			leer.close();
			return false;
		}
		leer>>Nom;
	}
	leer.close();
	return true;
}

void agregar(ofstream &es){
	system("cls");
	string Nom;
	string Dni;
	string Ape;
	es.open("datos.txt", ios::out  | ios::app);
	cout<<"Nombre ";
	cin>>Nom;
	cout<<"Apellido ";
	cin>>Ape;
	cout<<"Documento ";
	cin>>Dni;
	if(verifica(Dni))
	es<<Nom<<" "<<Ape<<" "<<Dni<<"\n";
	es.close();
}

void verRegistros(ifstream &Lec){
	system("cls");
	string nom;
	string dni;
	string ape;
	Lec.open("datos.txt", ios::in);
	cout<<"----------Personas registradas----------"<<endl;
	Lec>>nom;
	while(!Lec.eof()){
		Lec>>ape;
		Lec>>dni;
		cout<<"Nombre---------: "<<nom<<endl;
		cout<<"Apellido-------: "<<ape<<endl;
		cout<<"Documento------: "<<dni<<endl;
		cout<<"------------------------------"<<endl;
		Lec>>nom;
	}
	Lec.close();
	system("pause");
}

void buscarPersona(ifstream &Lec){
	system("cls");
	Lec.open("datos.txt", ios::in);
	string nom,ape,dni,dniaux;
	bool encontrado = false;
	cout<<"Escriba el documento: ";
	cin>>dniaux;
	Lec>>nom;
	while(!Lec.eof() && !encontrado){
		Lec>>ape;
		Lec>>dni;
		if(dni == dniaux){
			cout<<"Nombre---------: "<<nom<<endl;
			cout<<"Apellido-------: "<<ape<<endl;
			cout<<"Documento------: "<<dni<<endl;
			cout<<"------------------------------"<<endl;
			encontrado = true;
		}
		Lec>>nom;
	}
	Lec.close();
	if(!encontrado)
	cout<<"Dato no encontrado"<<endl;
	system("pause");
}



int main()
{
	printf ("Integrantes:\n\nBaravalle Juan Cruz\t\tDNI 39323482\nPincione Bernardo Emilio\tDNI 42723615\nMartinez Rodrigo Damian\t\tDNI 34224778\n");
	getchar();
	
	
	ofstream Esc;
	ifstream Lec;
	int op;
	do {
		system("cls");
		op = menu ();
		switch(op){
			case 1:
				agregar(Esc);
			break;
			
			case 2:
				verRegistros(Lec);
			break;
			
			case 3:
				buscarPersona(Lec);
			break;
		}
	}while (op != 4);
	return 0;
}
