#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

	void main()
{
	srand(time(0));
	int n1, n2;

	n1 = rand() % 100 + 1;

	cout << "qual e o numero?";
	cin >> n2;


	do
	{
		if (n1 > n2)
		{
		cout << "o meu numero é maior";
		cin >> n2;
		}
			

			if (n1 < n2)
			{
			cout << "o meu numero é menor";
			cin >> n2;
		}
			

	} while (n1 != n2);

	cout << "acertaste";
}