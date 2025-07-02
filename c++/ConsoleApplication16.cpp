#include "iostream"
using namespace std;
int main()
{
	//show the difference between m++ and ++m ( also m-- and --m )
	int m, n;
	m = 26;
	n = ++m;
	cout << endl << " ++m : " << " m = " << m << " , n = " << n << endl;
	m = 26;
	n = m++;
	cout << endl << " m++ : " << " m = " << m << " , n = " << n << endl;
	
		return 0;
}