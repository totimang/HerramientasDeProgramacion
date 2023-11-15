#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	
	//inicio el blucle en 1 y termino en <=100 al final de cada bucle le sumo 1 a la variable x.
	for(x=1; x<=100; x++)
	//muestro los resultados y doy una tabulacion entre cada resultado
	printf("%d \t",x);
	
	printf("\n Fin del programa \n");
	system("Pause");
	
	return 0;
}
