#include <iostream>
using namespace std;

int main()
{
	int Dani[4][4];

	cout << "adad bede satr aval matris 4 * 4 : ";

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> Dani[i][j];
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << " " << Dani[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}