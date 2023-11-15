#include <stdio.h>
#include <stdlib.h>

int main ()
{
	enum puso //<--Aqui creo la variable piso del enum.
	{
		p0, //Valor de p0=0
		p1, //Valor de p1=1
		p2, //Valor de p2=2
		p3, //Valor de p3=3
		
		/*...
		...
		... "Los ... son para indicar qye puedes continuar infinitamente"*/
	};
	
	printf ("La familia Perez vive en el piso %d \n", p1);
	printf ("La familia Ramirez vive en el piso %d \n", p2);
	printf ("La familia Gimenez vive en el piso %d \n", p3);
	
	/* printf...*/
	
	system("PAUSE");
	return 0;
}
