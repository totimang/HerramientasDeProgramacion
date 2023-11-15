#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

main()
{
	char car;
	static char nombre[] = "La temperatura ambiente";
	int a, b, c;
	float x, y, z;
	car = 'C'; a = 20; b = 350; c = 1955;
	x = 34.5; y = 1234; z = 1.248;
	printf("\n %s es de: ", nombre);
	printf("%d grados ° %c\n", a, car);
	printf("\n");
	printf("a = %d \t b = %d \t c = %d \n", a, b, c);
	printf("\n Los resultados son los siguientes: \n");
	printf("\n %f \t\t %f \t\t %f \n", x, y, z);   //utilizamos \t para dejar un espacio tabulado
	printf("----------------------------------\n");
	printf("\n Ingrese un nuevo valor para x: \n");
	scanf("%f",&x);
	printf("\n Ingrese un nuevo valor para y: \n");
	scanf("%f",&y);
	cout<<("----------------------------------\n");
	cout<<"\n x ="<<x<<"\t y = "<< y <<"\t z = "<<z; // a diferencia de printf no tengo que aclarar que es un valor tipo float
	cout<<"\n x+y = "<<x+y<<"\t y/5 = "<<y/5<<"\t z*2 = "<<z*2<<"\n\n";
	cout<<("\n\n");
	cout<<"Ingrese un nuevo valor de z: ";
	cin>>z; //a diferencia de scanf no tengo que aclarar que es un valor float
	z *= (x + y);
	printf("Valor resultante de z*(x+y) es: %.3f \n", z); //colocamos 3 antes de f en %f para que solo muestre 3 decimales
	
	system("PAUSE");
}
