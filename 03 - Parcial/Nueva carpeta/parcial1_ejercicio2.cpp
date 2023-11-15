#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <stdlib.h>


using namespace std;

const int FILAS = 3;
const int COLUMNAS = 2;

// Función para imprimir la matriz
void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para verificar si se ha ganado el juego
bool verificarGanador(int matriz[FILAS][COLUMNAS]) {
    int aciertos = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] == 7) {
                aciertos++;
            }
        }
    }
    return aciertos == 2;
}

int main() {
    char jugarDeNuevo;
    do {
        int matriz[FILAS][COLUMNAS] = {0};
        int chances = 3;

        // Ingreso de coordenadas
        for (int k = 0; k < 2; k++) {
            int fila, columna;
            cout << "Ingrese la coordenada " << (k + 1) << ": ";
            cin >> fila >> columna;

            matriz[fila][columna] = 7;
        }

        // Juego
        while (chances > 0) {
            int fila, columna;
            cout << "Ingrese una coordenada: ";
            cin >> fila >> columna;

            if (matriz[fila][columna] == 7) {
                cout << "¡HA ACERTADO!" << endl;
            } else if (matriz[fila][columna] == 0) {
                cout << "AGUA" << endl;
                chances--;
            } else {
                cout << "Coordenada inválida. Intente de nuevo." << endl;
                continue;
            }

            matriz[fila][columna] = -1;  // Marcar la posición como visitada

            imprimirMatriz(matriz);

            if (verificarGanador(matriz)) {
                cout << "¡FELICIDADES! Ha ganado el juego." << endl;
                break;
            }

            cout << "Chances restantes: " << chances << endl;
        }

        if (chances == 0) {
            cout << "SE LE HAN TERMINADO LAS CHANCES. Ha perdido el juego." << endl;
        }

        cout << "¿Desea jugar de nuevo? (si/no): ";
        cin >> jugarDeNuevo;
    } while (jugarDeNuevo == 's' || jugarDeNuevo == 'S');

    return 0;
}

