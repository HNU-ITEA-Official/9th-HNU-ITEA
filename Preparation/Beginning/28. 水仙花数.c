#include <stdio.h>
int main()
{
	for (int num = 100; num <= 999; num++) {
		int a = num / 100;
		int b = num % 100 / 10;
		int c = num % 10;
		int sum = a * a * a + b * b * b + c * c * c;
		if (sum == num)
			printf("%d\n", num);
	}
	return 0;
}