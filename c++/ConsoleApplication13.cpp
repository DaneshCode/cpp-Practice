#include "iostream"
using namespace std;
int main()
{
	int age;
	cout << " How old are you ? ";
	cin >> age;
	cout << "\n";
	if (age >= 18)
	{
		cout << " you can vote";
	}
	else
	{
		cout << " you can not vote ! because you are not yet 18 yers old !";
	}
	cout << "\n\n";
	return 0;
}