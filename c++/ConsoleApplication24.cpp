#include <iostream>
using namespace std;

int main()
{
	int years = 0;

	while (years < 1357)
	{
		cout << " " << years << " : Iran " << endl;
		years++;
	}

	while (years < 1402)
	{
		cout << " 	    " << years << " : Viran " << endl;
		years++;
		if (years == 1383)
			cout << "		    Menashe was born on : 1383 \n";
		if (years == 1401)
			cout << "		    Revolution on : 1401 \n";
	}

	while (years < 1504)
	{
		cout << "					    " << years << " : iran " << endl;
		years++;
		if (years == 1503)
			cout << "						 	       menashe`s 120th birthday : 1503 \n";
	}
	return 0;
}
