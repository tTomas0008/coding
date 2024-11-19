#include <iostream>
#include <stdio.h>


using namespace std;

void main()
{
	int n1, n2, escolha;
	char operação;
	cout << "qual e o primeiro numero?";
		cin >> n1;
		cout << "qual e o segundo numero?";
		cin >> n2;
		cout << "queres (1)somar, (2)multiplicar, (3)dividir ou (4)subtrair?";
		cin >> operação;


		switch (operação)
		{
		case '1':
			cout << n1 << "+" << n2 << "=" << (n1 + n2);
			break;
		case '2':
			cout << n1 << "x" << n2 << "=" << (n1 * n2);
			break;
		case '3':
			cout << n1 << "/" << n2 << "=" << (n1 / n2);
			break;
		case '4' :
			cout << n1 << "-" << n2 << "=" << (n1 - n2);
	}

		



}