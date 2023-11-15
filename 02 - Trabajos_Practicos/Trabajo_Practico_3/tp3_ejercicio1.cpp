#include <stdlib.h>
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	printf ("Integrantes:\n\nJuan Cruz Baravalle\nBernardo Emilio Pincione\nRodrigo Damian Martinez\n");
	getchar();
	
	char frase[50];
	int voc=0, num=0, con=0, i, op;

	cout<<"Ingrese una frase: ";
	gets(frase);


	menu:
	cout<<"\n-----MENU-----";
	cout<<"\n 1.Contar vocales";
	cout<<"\n 2.Contar numeros";
	cout<<"\n 3.Contar consonantes";
	cout<< "\n\n ELIJA UNA OPCION ====>  ";
	cin>>op;

	for(i=0; i<50; i++){
	if((frase[i]=='a')or (frase[i]=='e')or (frase[i]=='i')or (frase[i]=='o')or (frase[i]=='u'))
	{
	voc++;

	}
	else if ((frase[i]=='1') or (frase[i]=='2')or (frase[i]=='3') or (frase[i]=='4')or (frase[i]=='5') or (frase[i]=='6') or (frase[i]=='7') or(frase[i]=='8')or (frase[i]=='9')) 

      {
       num++;
       
	   }

	else
        {


        con++;}	
	}


        
switch(op){
	
	case 1: op=1;
	printf("La cantidad de vocales es: %d \n\n", voc);
	break;
	case 2: op=2;
	printf("La cantidad de numeros es: %d \n\n", num);
	break;
	case 3: op=3;
	printf("La cantidad de consonantes es: %d \n\n", con);//Nos da mal el conteo de vocales
	break;
	
}
system ("pause");

}


