#include "iostream"
using namespace std;

int main()
{
	char country;
	cout << " Enter the first letter of the country to display the name of the country (Example: f >>>> france)\n\n" << " The first letter: ";
	cin >> country;
	cout << "\n";
	switch (country)
	{
	case 'a': cout << " Argentina \n Austria \n Australia \n"; break;
	case 'b': cout << " Brazil \n"; break;
	case 'c': cout << " Canada \n"; break;
	case 'i': cout << " iran \n iraq \n "; break;
	case 'n': cout << " netherland \n"; break;
	case 'f': cout << " france \n"; break;

	default: cout << " eror 404 ... ! \n"; break;

	}
    return 0;
}