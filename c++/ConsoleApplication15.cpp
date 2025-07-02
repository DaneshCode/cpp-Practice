#include "iostream"
using namespace std;

int main()
{
	double masahat, mohit, shoaa;
	const double pi = 3.141593;
	cout << " ( shoaa ra vared konid ta masahat va mohit an mohasebeh shavad )\n\n" << " shoaa : ";
	cin >> shoaa;
	masahat = shoaa * shoaa * pi;
	mohit = shoaa * 2 * pi;
	cout << " -------------------------\n\n" << " masahat : " << masahat << "\n\n" << " mohit : " << mohit << "\n";
	return 0;
}