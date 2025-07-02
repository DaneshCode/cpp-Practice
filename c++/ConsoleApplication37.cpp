#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << " jadval zarb ta chand bashe ? ";cin >> x; cout << "\n\n";
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			cout << "\t" << i * j;
		}
		cout << "\n\n";
	}
	return 0;
}