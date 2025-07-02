#include "iostream"
using namespace std;

int main()
{
	double m,n;
	cout << " Enter two numbers to determine the minimum among them \n\n" << " The first number: ";
	cin >> m;
	cout << "\n" << " The second number: ";
	cin >> n;
	cout << "\n";
	double  min = (m < n) ? m : n;
	cout << " minimum(" << m << "," << n << ") = " << min << "\n";

	return 0;
}