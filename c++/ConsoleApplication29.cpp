#include <iostream>
using namespace std;

int main()
{
	int n, i, x = 0, y = 1, z = 1, nextnum;
	cout << " tedad jomle bezan : ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout << x << " ";
		}
		else if (i == 1)
		{
			cout << y << " ";
		}
		else if (i == 2)
		{
			cout << z << " ";
		}
		else
		{
			nextnum = y + z;
			y = z;
			z = nextnum;
			cout << nextnum << " ";
		}
	}
	return 0;
}