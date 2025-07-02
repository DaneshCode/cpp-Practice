#include "iostream"
using namespace std;
int main()
{
	int a, b, c, d;
	float answer;
	cout << " please enter first  number  : ";
	cin >> a;
	cout << " please enter second number  : ";
	cin >> b;
	cout << " please enter third  number  : ";
	cin >> c;
	cout << " please enter fourth number  : ";
	cin >> d;
	answer = (a + b + c + d) / 4;
	cout << " -----------------------------------\n\n";
	cout << "              The average is : ";
	cout << answer;
	cout << "\n";

	return 0;
}