#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << " aadad aval ta chand brat nshon bedam ? "; cin >> x; cout << "\n\n";
	bool isprime;
	for (int i = 2; i <= x; i++)
	{
		isprime = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isprime = false;
				break;
			}
		}
		if (isprime == true)
		{
			cout << "\t" << i << " \n";
		}
	}

	return 0;
}
