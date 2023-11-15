#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream> //libreria que permite entrada y salida de caractares
using namespace std; //es para poder usar palabras reservadas



int main()  //cuerpo del programa
{
	char letra;         //declaracion de tipo char (1 letra)
	
	cout<<"Escriba una palabra cualquiera \n"<<endl; //muestra en pantalla lo que se preguntara
	
	letra=cin.get();                                  //como se utiliza cin.get
	
	cout<<"\nTu palabra empieza con la letra: "<<letra<<endl; //mostrar en pantalla los resultados del programa
	
	system("PAUSE");
	return 0; 	
}
