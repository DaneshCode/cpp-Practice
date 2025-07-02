#include <iostream>
using namespace std;

int main()
{
	int years;

	for (years = 1 ; years < 1357 ; years++)
	{
		cout << " " << years << " : Iran " << endl;
	}

	for (years  = 1357 ; years < 1402 ; years++)
	{
		cout << "	    " << years << " : Viran " << endl;
				if (years == 1383)
			cout << "		        Menashe was born on : 1383 \n";
		if (years == 1401)
			cout << "		        Revolution on : 1401 \n";
	}

	for (years = 1402 ; years < 1504 ; years++)
	{
		cout << "					    "<< years << " : iran " << endl;
		if (years == 1503)
			cout << "						       menashe`s 120th birthday on : 1503 \n";
	}
	return 0;
}