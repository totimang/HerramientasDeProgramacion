#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

//Creo la estructura
struct pareja
{
	int A, B;
	int LeeA() { return A;} //Devuelve el valor de A
	int LeeB() { return B;} //Devuelve el valor de B
	void GuardaA(int n) { A = n;} //Asigna un nuevo valor a A
	void GuardaB(int n) { B = n;} //Asigna un nuevo valor a B
} Par;

int main()
{
	Par.GuardaA(15); //Dentro del parentesis asigno el valor de la variable entera "n"
	Par.GuardaB(63);
	
	//Muestro los resultados de los valores dentro de la estructura pareja
	cout << Par.LeeA() << endl;
	cout << Par.LeeB() << endl;
	
	system ("PAUSE");
	return 0;
}
