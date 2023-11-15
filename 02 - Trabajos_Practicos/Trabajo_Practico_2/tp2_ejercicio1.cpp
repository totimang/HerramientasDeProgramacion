#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

main()
{
	printf ("Integrantes:\nJuan_Cruz Baravalle\nBernardo_Emilio Pincione\nRodrigo_Damian Martinez\n");
	getchar();
	string nom, ape, resp;
	
	do
	{
		int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0;
		printf("Ingrese un nombre: \n");
		cin>>nom;
		printf("Ingrese un apellido: \n");
		cin>>ape;
		
		if(nom=="Mercedes")
		{
			a=1;
		}
		
		if(ape=="Mendoza")
		{
			b=1;
		}
		
		if(nom=="Juan_Cruz")
		{
			c=1;
		}
		
		if(ape=="Baravalle")
		{
			d=1;
		}
		
		if(nom=="Maximiliano")
		{
			e=1;
		}
		
		if(ape=="Almiron")
		{
			f=1;
		}
		
		if(nom=="Jorge")
		{
			g=1;
		}
		
		if(ape=="Jurado")
		{
			h=1;
		}
		
		if(nom=="Felipe")
		{
			i=1;
		}
		
		if(ape=="Herzog")
		{
			j=1;
		}
		
		if(nom=="Daniel")
		{
			k=1;
		}
		
		if(ape=="Arias")
		{
			l=1;
		}
		
		if(nom=="Bernardo_Emilio")
		{
			m=1;
		}
		
		if(ape=="Pincione")
		{
			n=1;
		}
		
		if(nom=="Rodrigo_Damian")
		{
			o=1;
		}
		
		if(ape=="Martinez")
		{
			p=1;
		}
		
		if(a==1 && b==1 || c==1 && d==1 || e==1 && f==1 || g==1 && h==1 || i==1 && j==1 || k==1 && l==1 || m==1 && n==1 || o==1 && p==1)
		{
			printf("Esta persona SI es parte del grupo 2: \n\n");
		}
		else
		{
			printf("Esta persona NO es parte del grupo 2: \n\n");
		}
		
		printf("Desea buscar otro nombre y apellido: \n");
		cin>>resp;
		while (resp != "si" && resp!= "no")
		{
			printf("\n Por favor ingrese si o no: ");
			cin>>resp;
		}
		
	}while( resp == "si" );
	
	system("PAUSE");
	return 0;
}
