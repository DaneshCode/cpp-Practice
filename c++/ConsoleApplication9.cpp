//برنامه ای بنویسید که دو عدداز ورودی گرفته حاصل جمع را محاسبه و نمایش دهد
#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
	int x, y, sum;
	printf("Enter first number :");
	scanf("%d", &x);
	printf("Enter second number :");
	scanf("%d", &y);
	sum = x + y;
	printf("sum is : %d\n", sum);
	return 0;
}
