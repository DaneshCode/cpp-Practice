#include <stdio.h>
#pragma warning(disable : 4996) //Because scanf is obsolete in C++, you should use error correction.
int main()
{
	int a = 0;
	printf("please enter a number : \n");
	scanf("%d", &a);
	printf("a=%d\n", a);

	return 0;
}
