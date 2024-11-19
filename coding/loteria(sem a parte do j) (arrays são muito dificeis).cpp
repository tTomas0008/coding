#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void main()
{
int numeros[5], i, aposta[5], contar=0;
	srand(time(0));
	for (i = 0; i < 5; i++)
	{
		numeros[i] = rand() % 50 + 1;
		cout << numeros[i] << "\n";
	}
	for (i = 0; i < 5; i++)
	{
	cout << "qual e a tua aposta?";
	cin >> aposta[i];
	}


	for (i = 0; i < 5; i++)
	{
		if (aposta[i] == numeros[i])
		{
			contar = contar + 1;
		}
	}
		cout << "acertaste " << contar << " numeros " "\n";

		cout << "os numeros que sairam foram" "\n";

		for (i = 0; i < 5; i++)
		{
		 cout << numeros[i] << "\n";
		}

		
			

	
	
	
}
	


	