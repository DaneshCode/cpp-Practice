#include <iostream>
using namespace std;

int main()
{
	int s;

	cout << "teadad ra vared konid : ";
	cin >> s;
	cout << endl;
	for (int d = 1; d <= s; d++)
	{
		for (int j = s - d; j >= 0; j--)
			cout << "*";
		cout << "\n\n";
	}

	return 0;
}

