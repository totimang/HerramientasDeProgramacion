#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	
	//inicio el bucle en 1 y termino en <=100 al final de cada bucle le sumo 9 a la variable x
	for(x=1; x<=100; x=x+9)
	//muestro los resultados y doy una tabulacion entre cada resultado
	printf ("%d \t",x);
	
	printf("\n Fin del programa \n");
	system("Pause");
	
	return 0;
}
