#include <stdio.h>
#define N  1010

int a[N][N];

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if(i == j && a[i][j] > 0){
                cnt ++;
                a[i][j] = 0;
            }
            if(i + j == n - 1 && a[i][j] > 0)
                cnt ++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}