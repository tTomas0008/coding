#include <iostream>
#include <string>
using namespace std;
void main()
{
	string carros[5];
	int i;
	char escolha = 's';
	do
	{
		for (i = 0; i < 5; i++)
		{
			cout << "qual eh o nome do " << i + 1 << " carro? " << "\n";
			cin >> carros[i];
		}

		for (i = 4; i >= 0; i--)
		{
			cout << "o nome do " << i + 1 << " carro eh" << carros[i] << "\n";
		}

		cout << "sair? " << " se sim, pressiona 's', se não, pressiona 'n'";
		cin >> escolha;

	} while (escolha !='s');
}