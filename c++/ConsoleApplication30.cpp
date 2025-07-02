// maghloob adadd ra bedast avarad
#include <iostream>
using namespace std;

int main()
{
	int  r=0 , m=0 , n;
		
		cout << " adad bede : "; cin >> n;
		while (n > 0)
		{
			r = n % 10;
			n = n / 10;
			m = m * 10 + r;
		}
		cout <<"\n\t" << m << endl;
	

	return 0;
}