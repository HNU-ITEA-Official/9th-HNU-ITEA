#include <stdio.h>
#define N 100010

int a[N];
int n, p;

void quick_sort(int q[], int l, int r)
{
    if(l >= r) return ;
    int x = q[(l + r) / 2], i = l - 1, j = r + 1;
    while(i < j)
    {
        do ++ i; while(q[i] < x);
        do -- j; while(q[j] > x);
        if(i < j){
            int t = q[i];
            q[i] = q[j];
            q[j] = t;
        }
    } 
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}
int main()
{
    scanf("%d %d", &n, &p);
    for (int i = 0; i < n; i ++) scanf("%d", &a[i]);
    quick_sort(a, 0, n - 1);
    int max_n = 0;
    for (int i  = 0, j = 0; i < n; i ++)
    {
        while(a[i] > a[j] * p)
            j ++;
        if(i - j + 1 > max_n) max_n = i - j + 1;
    }
    printf("%d", max_n);
    return 0;
}

