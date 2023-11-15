#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


main()
{
	int a;
	printf("Ingrese un numero: ");
	scanf("%d",&a);
	
	if(a<=12)//primer if condicional
	{
		a--;
		a*=10;
		
		if(a>12)//segundo if anidado
		{
			a*=10;
			a++;
		}
	}
	
	printf("El resultado es: %d\n",a);
	
	system("PAUSE");
}
