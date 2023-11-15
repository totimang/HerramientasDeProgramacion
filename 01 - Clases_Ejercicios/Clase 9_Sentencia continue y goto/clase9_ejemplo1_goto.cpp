//agrego librerias
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<iostream>
using namespace std;

#define k 8

main()
{
	int f, c, n;
	printf("Ingrese un valor para n: ");
	scanf("%d", &n);
	
	for (f = 0; f < k; f++)
	{
		for (c = 0; c < k; c++)
		{
			if (f*c > n)
			goto salir; //va a la linea 25
		}
	}
	
	salir:
		if(f<k && c<k)
		printf("(%d, %d) \n\n", f, c);
		
		system("Pause");
}
