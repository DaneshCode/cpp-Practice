#include <iostream>

using namespace std;

int main()
{
	float time;
	cout << " (24 - hour format) & (the minute with.specify) \n\n  what time is it ? ";
	cin >> time;
	if (time < 00.00)
	{
		cout << "\n Error 404 ... The clock is wrong ! \n";
	}
	else if (time > 23.60)
	{
		cout << "\n Error 404 ... The clock is wrong ! \n";
	}
	else if (time <= 12)
	{
		cout << "\n " << time << " am" << "\n";
	}
	else if (time > 12 )
	{
		cout << "\n " << time - 12 << " pm" << "\n";
	}
	return 0;
}