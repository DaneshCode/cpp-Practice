#include "iostream"
using namespace std;

int main()
{
	char country;
	cout << " Enter the first letter of the country to display the name of the country (Example: f >>>> france)\n\n" << " The first letter: ";
	cin >> country;
	cout << "\n";
	if (country == 'a') cout << " Argentina \n Austria \n Australia \n";
	else if (country == 'b') cout << "  Brazil \n";
	else if (country == 'c') cout << " Canada \n";
	else if (country == 'i') cout << " iran \n";
	else if (country == 'n') cout << " netherland \n";
	else if (country == 'f') cout << " france \n";
	else cout << " eror 404 ... ! \n";

	return 0;
}