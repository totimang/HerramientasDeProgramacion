#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

struct Fecha
{
	int dia,mes,anio;
};

struct Persona
{
	char nombre[20];
	int edad,peso;
	Fecha fecha;
}persona = {"Catulo",20,45,2,12,1997};

struct Empleado{
	Persona persona;
	int salario;
}trabajador = {"Anibal",19,60,22,7,1983,62.830};//notan algo aqui?

int main(){
	
	cout <<"\n\n-------------PERSONA----------" <<endl;
	cout <<"Persona: " <<persona.nombre;
	cout <<"\nEdad: " <<persona.edad;
	cout <<"\nPeso: " <<persona.peso;
	cout <<"\nDia de nacimiento: " <<persona.fecha.dia;
	cout <<"\nMes de nacimiento: " <<persona.fecha.mes;
	cout <<"\nAnio de nacimiento: " <<persona.fecha.anio;
	
	cout <<"\n\n------------TRABAJADOR--------" <<endl;
	cout <<"\nTrabajador: " <<trabajador.persona.nombre;
	cout <<"\nEdad: " <<trabajador.persona.edad;
	cout <<"\nPeso: " <<trabajador.persona.peso;
	cout <<"\nDia de nacimiento: " <<trabajador.persona.fecha.dia;
	cout <<"\nMes de nacimiento: " <<trabajador.persona.fecha.mes;
	cout <<"\nA�o de nacimiento: " <<trabajador.persona.fecha.anio;
	cout <<"\nSalario: " <<trabajador.salario<<endl;
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}
