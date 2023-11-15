#include <stdio.h>
#include <stdlib.h> //--- LIBRERIA AGREGADA QUE CONTIENE EL SYSTEM("PAUSE");
main ()
{
	int a, c, resultado;
	a = 5;
	c = a + 5;
	
	resultado = a;	
	printf("El valor de a es %d\n", resultado);
	
	resultado = c;
	printf("El valor de c es %d\n", resultado);
	
	system ("PAUSE"); //--- PAUSA;
	return 0;
}
