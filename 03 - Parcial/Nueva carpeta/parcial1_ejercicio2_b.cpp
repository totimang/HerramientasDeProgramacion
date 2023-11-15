#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

const int FILAS = 3;
const int COLUMNAS = 2;
const int NUMERO_1 = 2;
const int NUMERO_O = 0;
const int CHANCES = 3;

void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

bool coordenadaValida(int fila, int columna) {
    return fila >= 0 && fila < FILAS && columna >= 0 && columna < COLUMNAS;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    bool jugar = true;
    while (jugar) {
        vector<vector<int>> matriz(FILAS, vector<int>(COLUMNAS, NUMERO_O));

        int filaNumero1 = rand() % FILAS;
        int columnaNumero1 = rand() % COLUMNAS;
        matriz[filaNumero1][columnaNumero1] = NUMERO_1;

        cout << "Matriz generada: " << endl;
        imprimirMatriz(matriz);

        int aciertos = 0;
        int chancesRestantes = CHANCES;
        while (aciertos < 2 && chancesRestantes > 0) {
            int fila, columna;
            bool coordenadaValida = false;

            do {
                cout << "Ingrese las coordenadas (fila/columna): ";
                cin >> fila >> columna;

                coordenadaValida = coordenadaValida(fila, columna);
                if (!coordenadaValida) {
                    cout << "Coordenadas inválidas. Intente nuevamente." << endl;
                } else if (matriz[fila][columna] == NUMERO_1) {
                    cout << "¡Ha acertado!" << endl;
                    aciertos++;
                } else if (matriz[fila][columna] == NUMERO_O) {
                    cout << "AGUA" << endl;
                } else {
                    cout << "Coordenadas repetidas. Intente nuevamente." << endl;
                }
            } while (!coordenadaValida || matriz[fila][columna] == NUMERO_O);

            chancesRestantes--;
        }

        if (aciertos == 2) {
            cout << "¡Felicitaciones, ha ganado!" << endl;
        } else {
            cout << "Ha perdido. Los números 1 estaban en las siguientes coordenadas:" << endl;
            for (int i = 0; i < FILAS; ++i) {
                for (int j = 0; j < COLUMNAS; ++j) {
                    if (matriz[i][j] == NUMERO_1) {
                        cout << i << "/" << j << " ";
                    }
                }
            }
            cout << endl;
        }

        char respuesta;
        cout << "¿Desea volver a jugar? (s/n): ";
        cin >> respuesta;

        jugar = (respuesta == 's' || respuesta == 'S');
        cout << endl;
    }

    return 0;
}

