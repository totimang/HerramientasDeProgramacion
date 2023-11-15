#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>//agrego biblioteca TIME

//Defino cuantas posiciones tendra mi vector
#define N 5

int main()
{
	int x[N];
	int i, rand_int, rand_sig;
	
	//Genero valores segun los segundos del reloj de la pc.
	srand(time(0)+1);
	
	//Ingreso valores a mi vector x[N].
	for(i=0; i<N; i++)
	{
		rand_int = rand()%100; //Utilizo el valor de srand.
		
		rand_sig = (rand() % 2); //Calculo el modulo de rand si es 0
		if (rand_sig==0) {rand_int=-rand_int;} //cambio de signo
		
		x[i]=rand_int;
		printf("El valor %d es: %d\n\n", i+1,x[i]);
	}
	printf("\n\n");
	
	//Muestro si los valores son poositivos o negativos.
	for(i=0; i<N; i++)
	{
		if(x[i]>0) {printf("La %d posicion es POSITIVA\n\n",i+1);}
		else {printf("La %d posicion es NEGATIVA\n\n",i+1);}
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
