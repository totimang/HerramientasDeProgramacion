#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

main (){
	char nombre[30],apellido[30],alumno;
	int codigo, grado, promedio;
	string alumnon;//ingreso ahora un valor string(texto)para poder capturar un valor si o no en vez de un solo caracter.
	
	//comprobando si es un alumno nuevo.
	cout<< "Eres alumno del ESBA? (Responda s para si o n para no): "<<endl;
	cin>>alumno;
	cin.sync();//estp soncroniza el buffer con lo introducido por teclado en cin.
	if(alumno =='s')//este if compara alumno con el char.
	{
		cout<<"\n Bienvenido a ESBA BARRIO NORTE: "<<endl;
		goto regi;//GOTO es una funcion que veremos mas adelante pero sirve para ir en este caso al flag en la linea 54.
	}
	else
	{
		cout<<"\nEsta es tu oportunidad de anotarte: "<<endl;
	}
	
	cout<<"\nEstas registrado en ESBA? (Responda s/si para si, o n/no para no): "<<endl;
	regresa:
	cin>>alumnon;
	
	//utilizo un if que me permita comprobar el valor de la variable alumnon, cualquier respuesta distinta a s/si o n/no vuelve a cargar un valor
	if (alumnon!="si" && alumnon!="s" && alumnon!="no" && alumnon!="n"){
		cout<<"EL DATO ingresado es incorrecto por favor escriba s/si o n/no: ";
		goto regresa;//goto es una funcion que veremos mas adelante pero sirve para ir en este caso al flag en la linea 26.
	}
	
	
	if (alumnon=="n"){
		cout<<"\nHas dicho que eres un alumno nuevo: ";
		cout<<"\nIngresa tu nombre: ";
		cin>>nombre;
		cout<<"\nIngresa tu apellido: ";
		cin>>apellido;
		cout<<"\nBienvenido: "<<nombre<<" "<<apellido<<endl;
	}
	else if (alumnon=="no"){
		cout<<"\nHas dicho que eres un alumno nuevo: ";
		cout<<"\nIngresa tu nombre: ";
		cin>>nombre;
		cout<<"\nIngresa tu apellido: ";
		cin>>apellido;
		cout<<"\nBienvenido: "<<nombre<<" "<<apellido<<endl;
	}
	else if(alumnon=="si" || alumnon=="s")//para el s/si utilizo un solo else if con el parametro || (or)
	{
	regi:
	cout<<"Por favor indentificate ingresando tu nombre y apellido: ";
	cin>>nombre;
	cin>>apellido;
	cout<<"Bienvenido nuevamente: "<<nombre<<" "<<apellido<<endl;
	}
	
	system("PAUSE");
	cin.ignore();
	return EXIT_SUCCESS;
}
