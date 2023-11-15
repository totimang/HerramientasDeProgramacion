#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Persona {
    int DNI;
    char NombreyApellido[65];
};

void ingresarDatos(ofstream& archivo) {
    Persona persona;

    cout << "Ingrese el DNI: ";
    cin >> persona.DNI;

    cout << "Ingrese el Nombre y Apellido: ";
    cin.ignore();
    cin.getline(persona.NombreyApellido, 65);

    archivo.write(reinterpret_cast<const char*>(&persona), sizeof(Persona));

    cout << "Datos ingresados correctamente." << endl;
}

void buscarDatos(ifstream& archivo, int dni) {
    Persona persona;

    while (archivo.read(reinterpret_cast<char*>(&persona), sizeof(Persona))) {
        if (persona.DNI == dni) {
            cout << "El DNI pertenece a: " << persona.NombreyApellido << endl;
            return;
        }
    }

    cout << "No se encontró ninguna coincidencia para el DNI ingresado." << endl;
}

int main() {
    ofstream archivoSalida("DATOS.txt", ios::binary | ios::app);
    ifstream archivoEntrada("DATOS.txt", ios::binary);

    if (!archivoSalida || !archivoEntrada) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    char opcion;

    do {
        cout << "¿Qué desea hacer?" << endl;
        cout << "1. Ingresar un dato" << endl;
        cout << "2. Buscar un dato" << endl;
        cout << "3. Terminar el programa" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        if (opcion == '1') {
            ingresarDatos(archivoSalida);
        } else if (opcion == '2') {
            int dni;
            cout << "Ingrese el DNI a buscar: ";
            cin >> dni;
            buscarDatos(archivoEntrada, dni);
        } else if (opcion == '3') {
            break;
        } else {
            cout << "El ingreso es incorrecto. Por favor, escriba '1' para ingresar un dato, '2' para buscar un dato o '3' para terminar el programa." << endl;
        }

        cout << endl;
    } while (true);

    archivoSalida.close();
    archivoEntrada.close();

    return 0;
}

