#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>



using namespace std;

#define n 3
void mezclar(int v1[], int v2[]);
int vector2[n];


int main()
{
	printf ("Integrantes:\n\nBaravalle Juan Cruz\t\tDNI 39323482\nPincione Bernardo Emilio\tDNI 42723615\nMartinez Rodrigo Damian\t\tDNI 34224778\n");
	getchar();
	
	system("cls");
	
    printf("Bienvenido \n");
    printf("");

    int ingreso_n, ingreso_p, posicion; //ingreso_n: ingreso numero, ingreso_p: ingreso posicion
    string rta;
    std::rand;
    std::srand;
    srand(time(NULL));

    jugar:
    int vector[n] = {1, 2, 3};
    mezclar(vector, vector2);
    
    cout << "Ingrese un numero (1, 2, o 3): ";
    cin >> ingreso_n;
    while(ingreso_n!=1 && ingreso_n!=2 && ingreso_n!=3)
    {
        cout << "El numero " << ingreso_n << " no es valido. ";
        cout << "Por favor ingrese un numero entre el 1 y el 3: ";
        cin >> ingreso_n;
    }

    cout << "Ingrese una posicion (0, 1 o 2): ";
    cin >> ingreso_p;
    while(ingreso_p!=0 && ingreso_p!=1 && ingreso_p!=2)
    {
        cout << "La posicion " << ingreso_p << " no es valida. ";
        cout << "Por favor ingrese una posicion entre 0 y 2: ";
        cin >> ingreso_p;
    }

    if(vector2[ingreso_p]== ingreso_n)
    {
        cout << "¡ACERTO!" << endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(vector[i]==ingreso_n)
            {posicion=i;}
        }

        cout << "NO ACERTO." << endl;
        cout << "El NUMERO " << ingreso_n << " esta en la POSICION " << posicion << endl;
    }

    cout << "¿Desea volver a jugar? (si/SI o no/NO): ";
    cin >> rta;
    while((rta!="si" && rta!="SI") && (rta!="no" && rta!="NO"))
    {
        cout << "Si desea volver a jugar, presione si o SI, ";
        cout << "de lo contrario presione no o NO." << endl;
        cin >> rta;
    }
    if(rta=="si" || rta=="SI")
    {goto jugar;}

    system("PAUSE");
    return 0;
}

void mezclar(int v1[], int v2[])
{
    for(int i=0; i<n; i++)
    {
        srand(time(0)+1);
        if(i==0)
        {
            v2[i] = v1[rand()%3];
            while(v2[i] == v1[i])
            {
                v2[i] = v1[rand()%3];
            }
        }
        else
        {
            v2[i] = v1[rand()%3];
            while(v2[i] == v2[i-i] || v2[i] == v2[i-1])
            {v2[i] = v1[rand()%3];}
        }
    }
}
