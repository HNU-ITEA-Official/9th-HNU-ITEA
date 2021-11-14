#include <stdio.h>

#define N 100010

int n, m;
int a[N], b[N];

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i ++) scanf("%d", &a[i]);
	
	for (int i = 1; i <= n; i ++)
		b[i] += b[i - 1] + a[i];
		
	while(m --){
		int l , r;
		scanf("%d %d", &l, &r);
		printf("%d\n", b[r] - b[l - 1]);
	}
	return 0;
}




