// zadam 2*2 vali 4*4 mishe  ..
//                           --

#include <iostream>
using namespace std;

int main()
{
	int Dani[4][4];

	cout << " adad bede matris harchi * harki : \n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "\t\t";
			cin >> Dani[i][j];
		}
	}
	cout << endl << "\t  ----------------" << "\n\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "\t" << Dani[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}