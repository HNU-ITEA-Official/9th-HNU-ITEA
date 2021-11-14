#include <stdio.h>

#define N 1000010

int a[N], n, m;

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0;i < n; i ++) scanf("%d", &a[i]);
	while(m --)
	{
		int x;
		scanf("%d", &x);
		int l = 0, r = n - 1;
		while(l < r)
		{
			int mid = (l + r) / 2;
			if(a[mid] >= x) r = mid;
			else l = mid + 1;
		}
		if(a[l] == x) printf("%d ", l + 1);
		else printf("-1 ");
	}
	
	return 0;
}
