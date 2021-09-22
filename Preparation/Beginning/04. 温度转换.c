#include <stdio.h>
int main()
{
	int f;
	scanf("%d", &f);
	double c = 5.0 / 9 * (f - 32);
	printf("%.2lf\n", c);
	return 0;
}