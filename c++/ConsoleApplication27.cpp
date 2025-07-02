#include <iostream>
using namespace std;

int main()
{
	int n, i = 1;
	long sum = 0;
	cout << " adad bede ta brat ba ghabli hash jame konam  : ";
	cin >> n;
	while (true)
	{
		if (i > n) break;
		sum = sum + i++;
	}
	cout << " the sum of the first " << n << " adad is " << sum << endl;
	return 0;
}