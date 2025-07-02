#include <iostream>
using namespace std;

int main()
{
	float number1, number2;
	char operation;
	cout << " please enter your frist  number : "; cin >> number1;
	cout << " Please enter your  operation    : "; cin >> operation;
	cout << " please enter your secend number : "; cin >> number2;
	switch (operation)
	{
	case '+': cout << number1 + number2 << "\n"; break;
	case '-': cout << number1 - number2 << "\n"; break;
	case '*': cout << number1 * number2 << "\n"; break;
	case '/': cout << number1 / number2 << "\n"; break;

	default: cout << "           error \n"; break;

	}

	return 0;
}