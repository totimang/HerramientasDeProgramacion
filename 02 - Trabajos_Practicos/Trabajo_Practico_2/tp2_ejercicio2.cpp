#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	printf ("Integrantes:\nJuan_Cruz Baravalle\nBernardo_Emilio Pincione\nRodrigo_Damian Martinez\n");
	getchar();
	
	for(int i=1;i<=50;i+=2)
	//notemos que escribir i+=2 es similar a escribir i=i+2
	{
		cout << i << endl;
	}
	system("Pause");
	return 0;
}
