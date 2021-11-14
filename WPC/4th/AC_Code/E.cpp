#include <stdio.h>

#define N 100010

int a[N], n;

void quick_sort(int a[], int l, int r)
{
	if(l >= r) return ;
	int x = a[(l + r) / 2], i = l - 1, j = r + 1;
	while(i < j)
	{
		do ++i; while(a[i] < x);
		do --j; while(a[j] > x);
		if(i < j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	quick_sort(a, 0, j), quick_sort(a, j + 1, r);
	return ;
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
	
	quick_sort(a, 0, n -1);
	
	for (int i = 0; i < n; i ++)
		printf("%d ", a[i]);
		
	return 0;
}
