第一题
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int temp1 = -1, temp2, t = 0, maxn = 1;
    for(int i = 0; i < n; i++) {
        scanf("%d", &temp2);
        if(temp2 > temp1) {
            t++;
        }
        else {
            if(t > maxn) {
                maxn = t;
            }
            t = 1;
        }
        temp1 = temp2;
    }
    if(t > maxn) {
         maxn = t;
    }
    printf("%d", maxn);
    return 0;
}



