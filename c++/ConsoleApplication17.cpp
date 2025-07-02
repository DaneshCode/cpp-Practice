#include "iostream"
using namespace std;

int main()
{
	char answer ;

	cout << " Which is the correct ?" << "\n\n" << " 1 : Persepolis has the championship of Asia" << "\n" << " 2 : Real Madrid has six world championships" << "\n" << " 3 : Esteghlal has the championship of Asia" << "\n" << " 4 : Persepolis is a team with a long history and many championships" << "\n\n" << " your answer is : ";
	cin >> answer ;
	cout << "\n";
	if (answer == '3')
	{
		cout << " Excellent" << "\n";
	}
	else
	{
		cout << " You are a lowly Persepolis or Real fan" << "\n\n ";
	}
	return 0;
}