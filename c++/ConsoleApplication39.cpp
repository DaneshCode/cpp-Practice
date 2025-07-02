// pointer
#include <iostream>
using namespace std;

int main()
{
	int Dani = 26;
	cout << " Dani = " << Dani << endl;
	cout << " &Dani = " << &Dani << endl;

	int* pn = &Dani;
	cout << "  pn = " << pn << endl;
	cout << " &pn = " << &pn << endl;
	cout << " *pn = " << *pn << endl;

	int** ppn = &pn;
	cout << "  ppn = " << ppn << endl;
	cout << " &ppn = " << &ppn << endl;
	cout << " *ppn = " << *ppn << endl;
	cout << " **ppn = " << **ppn << endl;

	return 0;
}