#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string.h>
using namespace std;

const int ROWS = 3;
const int COLS = 2;
const int MAX_CHANCES = 3;
const int TARGET_NUM = 7;

void initializeMatrix(int matrix[ROWS][COLS])
{
    // Inicializar la matriz con ceros
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void printMatrix(const int matrix[ROWS][COLS])
{
    // Imprimir la matriz
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool isValidCoordinate(int row, int col)
{
    // Verificar si las coordenadas son válidas
    return (row >= 0 && row < ROWS && col >= 0 && col < COLS);
}

bool isTarget(int matrix[ROWS][COLS], int row, int col)
{
    // Verificar si la coordenada contiene el número objetivo
    return (matrix[row][col] == TARGET_NUM);
}

void playGame()
{
    int matrix[ROWS][COLS];
    int chances = MAX_CHANCES;

    initializeMatrix(matrix);

    std::cout << "Juego iniciado. Ingresa las coordenadas en formato 'fila columna'." << std::endl;

    while (chances > 0)
    {
        int row, col;
        std::cout << "Chances restantes: " << chances << std::endl;
        printMatrix(matrix);
        std::cout << "Ingrese las coordenadas: ";
        std::cin >> row >> col;

        if (!isValidCoordinate(row, col))
        {
            std::cout << "Coordenadas invalidas. Intentalo de nuevo." << std::endl;
            continue;
        }

        if (isTarget(matrix, row, col))
        {
            std::cout << "HA ACERTADO!" << std::endl;
            break;
        }
        else if (matrix[row][col] == 0)
        {
            std::cout << "AGUA" << std::endl;
            chances--;
        }
        else
        {
            std::cout << "Coordenadas ya seleccionadas. Intentalo de nuevo." << std::endl;
        }

        matrix[row][col] = 1;
    }

    if (chances == 0)
    {
        std::cout << "SE LE HAN TERMINADO LAS CHANCES. Juego terminado." << std::endl;
    }

    std::string playAgain;
    while (true)
    {
        std::cout << "Queres jugar de nuevo? (si/no): ";
        std::cin >> playAgain;

        if (playAgain == "si")
        {
            playGame();
            break;
        }
        else if (playAgain == "no")
        {
            std::cout << "Juego terminado. Hasta luego!" << std::endl;
            return;
        }
        else
        {
            std::cout << "Respuesta invalida. Por favor, responde con 'si' o 'no'." << std::endl;
        }
    }
}

int main()
{
	printf ("Integrantes:\n\nBaravalle Juan Cruz\t\tDNI 39323482\nPincione Bernardo Emilio\tDNI 42723615\nMartinez Rodrigo Damian\t\tDNI 34224778\n");
	getchar();
	
	system("cls");
	
    playGame();

    return 0;
}
