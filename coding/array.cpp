#include <iostream>


void main()
{
	using namespace std;
	int array[10], contador=0, somador=0, i,escolha;

	for (i = 0; i < 10; i++)
	{
		cout << " qual e o " << i + 1 << " numero ";
		cin >> array[i];
	}
	cout << "queres (1) contar negativos ou (2)somar os negativos?";
	cin >> escolha;
	switch (escolha)
	{
	case 1: 
		for (i = 0; i < 10; i++)
		{
			if (array[i] < 0)
			{
				contador = contador + 1;
			}
		}
		cout << contador;
		break;
	case 2: 
		for (i = 0; i < 10; i++)
		{
			if (array[i] < 0)
			{
			somador = somador + array[i];
			}
		}
		cout << somador;
		break;
	default: cout << "idiota";
		break;
	}
}














