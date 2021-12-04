第三题
#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int sum[3010] = {0};
    int t;
    for(int i = 1; i <= n; i++) {
        scanf("%d", &t);
        sum[i] = sum[i - 1] + t;
    }
    int min = 1000000;
    for(int i = m; i<=n; i++) {
        t = sum[i] - sum[i - m];
        if(t < min) {
            min = t;
        }
    }
    printf("%d", min);
    return 0;
}
