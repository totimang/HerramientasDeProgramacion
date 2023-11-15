#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <iostream> //libreria que permite entrada y salida de caractares
using namespace std; //es para poder usar palabras reservadas


int main()
{
	char nombre[10];  //declaracion de variable char de 10 caractares
	
	cout<<"Cual es tu nombre completo?: "; //muestra en pantalla lo que se preguntara " " 
	cin>>nombre;                           //ingresar el nombre
	cout<<"\nSaludos! "<<nombre<<endl;    //muestra en pantalla lo que se preguntara " " junto con nombre
	
	fflush(stdin);                        //limpiamos la memoria de lo que escribimos en el teclado
	
	cout<<"\n\nCual es tu nombre completo?: "<<endl;  //pedir nombre pero sin espacios
	cin.getline(nombre,10);                           //utiliazacion del getline con cin para obtener hasta 10 caractares
	cout<<"\nSaludos nuevamente! "<<nombre<<"\n\n"<<endl;  //muestra en pantalla lo que se preguntara " " junto con nombre
	
	system("PAUSE");                                      //PAUSA para ver los resultados por pantalla
	return 0;                                             //termina el programa
}
