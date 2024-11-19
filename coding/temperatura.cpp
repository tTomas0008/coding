#include <iostream>
#include <locale.h>

void main()
{
	using namespace std;
	char escolha;
	int c, f, temperatura;

	cout << "qual a temperatura de hoje?";
	cin >> temperatura;

	cout << "(c)celsius ou (f)fahrenheit";
	cin >> escolha;

	switch (escolha)
	{
	case 'c' :
	case 'C' :

		cout << "a temperatura convertida para fahrenheit fica" << (temperatura * 1.8 + 32);

		break;

	case 'F':
	case 'f':
		cout << "a temperatura convertida para celsius fica" << (temperatura - 32 * 5 / 9);

		break;

	default:
		cout << "escreve algo valido, doente";

		
	}
}