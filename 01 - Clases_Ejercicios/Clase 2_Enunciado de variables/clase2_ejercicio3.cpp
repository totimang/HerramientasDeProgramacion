#include<stdio.h>
#include<conio.h> //--- LIBRERIA AGREGADA QUE CONTIENE ????("???");
#include <stdlib.h> //--- LIBRERIA AGREGADA QUE CONTIENE EL SYSTEM("PAUSE");
main()
{
	int a, b, c, resultado;
	a = 5;
	b = a+1;
	c = (a + 5 * 2) * (b + 6 / 2) + (a * 2);
	
	resultado = a;
	printf("El valor entero de a es %i\n", resultado);
	
	resultado = b;
	printf("El valor entero de b es %i\n", resultado);
	
	resultado = c;
	printf("El valor entero de c es %i\n", resultado);
	
	system ("PAUSE"); //--- PAUSA;
	return 0;
}
