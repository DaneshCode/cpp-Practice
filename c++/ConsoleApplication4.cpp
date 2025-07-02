#include <stdio.h>
int main()
{
	int a = 26000;
	char c = a;
	int b = c;
	if (a != b) // ! = means "not equal"
		printf("oops! : %d!=%d", a, b);
	else
		printf("wow! we have larg characters \n");
}