#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;

int main()
{	
	struct COORD {int x,y,z;} punto;
	struct COORD *ap_punto;
	punto.x = punto.y = punto.z = 1;
	cout<<"Valor INICIAL:"<<endl;
	cout<<punto.x<<"\t"<<punto.y<<"\t"<<punto.z<<"\t"<<endl;
	ap_punto = &punto; //se asigna un punto al apuntador
	ap_punto-> x++; //con el operador -> se accesan los miembros
	ap_punto-> y+=2; //de la estructura apuntados por ap_punto
	ap_punto-> z=4;
	cout<<"VALOR FINAL:"<<endl;
	cout<<punto.x<<"\t"<<punto.y<<"\t"<<punto.z<<"\t"<<endl;
	system("Pause");
}
