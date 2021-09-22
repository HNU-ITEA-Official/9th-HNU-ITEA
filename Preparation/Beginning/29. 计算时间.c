#include <stdio.h>
int main()
{
	int h, m, past;
	scanf("%d %d %d", &h, &m, &past);
	int time = h * 60 + m + past;
	h = time / 60;
	m = time % 60;
	printf("%d %d\n", h, m);
	return 0;
}