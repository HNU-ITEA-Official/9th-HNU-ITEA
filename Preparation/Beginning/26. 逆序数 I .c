#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	int a = num / 100;
	int b = num % 100 / 10;
	int c = num % 10;
	num = c * 100 + b * 10 + a;
	printf("%d\n", num);
	return 0;
}