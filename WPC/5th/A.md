### hash映射
```c++
#include <stdio.h>
#define N 300003
#define null 0x3f3f3f3f

long long a[N], v[N];
long long cnt[N];
long long  n, k;

long long find(long long x)
{
	long long t = (x % N + N ) % N;
	while(v[t] != null && v[t] != x)
	{
		t ++;
		if(t == N) t = 0;
	}
	return t;
}

int main()
{
	for (int i = 0;i < N;i ++) v[i] = null;
	scanf("%lld %lld", &n, &k);
	for (long long i = 0; i < n; i ++) {
		scanf("%d", &a[i]);
		long long t = find(a[i]);
		v[t] = a[i];
		cnt[t] ++;
	}
	
	long long sum = 0;
	for (long long i = 0;i < n; i ++){
		long long t = find(a[i] - k);
		sum += cnt[t]; 
	}
	
	printf("%lld", sum);
}

```

### 双指针做法
```c++
#include <stdio.h>
#define N 200010

long long arr[N];
long long count;

void quick_sort(long long a[], int l, int r)
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
	quick_sort(a, l, j), quick_sort(a, j + 1, r);
	return ;
}

int main() {
    int n, c;
    scanf("%d%d", &n, &c);
    for(int i = 0;i < n;i++)  scanf("%d", &arr[i]);
    quick_sort(arr, 0, n - 1);
    int l = 0, r1 = 0, r2 = 0;
    for(int l = 0;l < n;l++) {
        while(r1 < n && arr[r1] - arr[l] <= c) r1++;
        while(r2 < n && arr[r2] - arr[l] < c) r2++;
        if(r1 - 1 >= 0 && arr[r2] - arr[l] == c && arr[r1 - 1] - arr[l] == c) count += r1 - r2;
    }
    printf("%lld", count);
    return 0;
}


```