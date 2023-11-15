
#include "iostream"

using namespace std;
int main()
{
	int contador = 0;//iniciamos el contador en cero
	
	for(int i = 0; i < 52; i++)
	{
		if(i%13 == 0)//si el residuo es cero es múltiplo de 13
		{
			contador++;//si es múltiplo aumentamos el contador en 1
		}
	}
	
	//mostramos el contador después de verificar todos los números
	cout << "La cantidad de multiplos de 13 es: "<<contador << endl;
	
	system("Pause");
	return 0;
}
