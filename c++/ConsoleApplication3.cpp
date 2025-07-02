#include <stdio.h>
#include <limits.h> // Definition of int_min & int_max
int main()
{
	printf("Range of types int & unsigned int \n\n");
	printf("Type Minimum & Maximum \n");
	printf("--------------------------------------------------\n");
	printf("int %d  %d \n", INT_MIN, INT_MAX);
	printf("unsignedint %d %u \n", 0, UINT_MAX);

	return 0;
}