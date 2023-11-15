#include <stdio.h>



void main()

{
	
	int a = 0, b = 0, s = 0;       //<---inicializar las variables
	
	printf("Valores de a y b: ");  //<---(muestras por pantalla)
	
	scanf("%d %d", &a, &b);        //<---(leer desde el teclado a y b)
	
	s = a + b;                     //<---suma
	
	printf("La suma es: %d", s);   //<---muestra por pantalla
	
	getchar();                     //<---espera hasta que se presione una tecla
	getchar();                     //<---se colocan 2 para que no utilice la tecla que esta en memoria	
}
