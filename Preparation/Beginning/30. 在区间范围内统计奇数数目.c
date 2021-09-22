#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t-- > 0) {
		int low, high;
		scanf("%d %d", &low, &high);
		int cnt = (high + 1) / 2 - low / 2;
		printf("%d\n", cnt);
	}
	return 0;
}