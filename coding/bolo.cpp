#include <iostream>

void main()
{
	using namespace std;
	int nF, nP;

	cout << "quantas fatias tem o bolo?";
	cin >> nF;


	cout << "quantas pessoas tem na festa?";
	cin >> nP;

	cout << " vai dar " << (nF/nP) << " fatias para" << nP << " pessoas";
	cout << " e sobra " << (nF % nP) << " fatias";
}