#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num /= 10;
	}
	printf("%d\n", rev_num);
	return 0;
}