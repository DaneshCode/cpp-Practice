// for - each loop in C++ Arrays
#include <iostream>
using namespace std;

int main()
{
	int Dani[5] = { 1,2,3,4,5 };
	for (int i : Dani)
		cout << i << endl;

	cout << "-------------------" << endl;

	// Get the Size of an Array (byte)

	cout << " size is : " << sizeof(Dani) << " byte" << endl;


	cout << "-------------------" << endl;
	// Get the Size of an Array (real)

	cout << " size is : " << sizeof(Dani) / sizeof(int) << endl;


	cout << "-------------------" << endl;

	for (int i = 0; i < sizeof(Dani) / sizeof(int); i++)
		cout << Dani[i] << endl;

	cout << "-------------------" << endl;
		return 0;
}