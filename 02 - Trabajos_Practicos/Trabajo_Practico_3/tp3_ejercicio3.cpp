#include <stdlib.h>
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
	
	printf ("Integrantes:\n\nJuan Cruz Baravalle\nBernardo Emilio Pincione\nRodrigo Damian Martinez\n");
	getchar();
    
	int n1, n2, n3, n4;
    int contador = 0;
    	
    cout <<"Ingrese un primer numero del 0 al 9: \n";
    cin >> n1;
    while (n1 < 0 || n1 > 9) {
        cout << "El numero debe estar entre el 0 y el 9. Ingrese nuevamente: \n";
        cin >> n1;
    }

    cout <<"Ingrese un segundo numero del 0 al 9: \n";
    cin >> n2;
    while (n2 < 0 || n2 > 9) {
        cout << "El numero debe estar entre el 0 y el 9. Ingrese nuevamente: \n";
        cin >> n2;
    }

    cout <<"Ingrese un tercer numero del 0 al 9: \n";
    cin >> n3;
    while (n3 < 0 || n3 > 9) {
        cout << "El numero debe estar entre el 0 y el 9. Ingrese nuevamente: \n";
        cin >> n3;
    }

    cout <<"Ingrese un cuarto numero del 0 al 9: \n";
    cin >> n4;
    while (n4 < 0 || n4 > 9) {
        cout << "El numero debe estar entre el 0 y el 9. Ingrese nuevamente: \n";
        cin >> n4;
    }

    for (int i = 1; i <= 4; ++i) {
        int numero;
        switch (i) {
            case 1:
                numero = n1;
                break;
            case 2:
                numero = n2;
                break;
            case 3:
                numero = n3;
                break;
            case 4:
                numero = n4;
                break;
        }

        if (numero == 0) {
            contador++;  
            continue;
        }

        cout << "Ha ingresado: " << numero << endl;
    }

    cout << "En los ingresos habia esta cantidad de ceros: " << contador << endl;

    system("Pause");
    return 0;
}


