#include <stdio.h>
int main()
{
	const char NLINE = '\n';
	const int MAXINT = 2147483647;
	const int N = MAXINT / 2;
	const float KM_PER_MI = 1.60934;
	const double PI = 3.14159265358979323846;
	printf("%c\t%d\t%d\t%f\t%f\n", NLINE, MAXINT, N, KM_PER_MI, PI);
	return 0;
}