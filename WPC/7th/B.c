#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int m, n;
    scanf("%d %d", &m, &n);
    int row[1010], col[1010];
    for(int i = 0; i < m; i++) {
        scanf("%d", &row[i]);
    }
    for(int i = 0; i < n; i++) {
        scanf("%d", &col[i]);
    }
        int ans = 0;
        if(a + 1 <= c)
            for(int i = a + 1; i <= c; i++)
                ans += row[i];
        else
            for(int i = a - 1; i >= c; i--)
                ans += row[i];
        if(b + 1 <= d)
             for(int i = b + 1; i <= d; i++)
                ans += col[i];
        else
            for(int i = b - 1; i >= d; i--)
                ans += col[i];
       printf("%d", ans);
       return 0;
}