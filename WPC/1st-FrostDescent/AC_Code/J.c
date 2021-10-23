#include<stdio.h>
#define MAX 1000000005
int main()
{
    int min_n = MAX, sum = 0;
    int n;
    scanf("%d", &n);
    int num;
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
        if(min_n > num) min_n = num;
    }
    printf("%d\n", sum - n * min_n);
    return 0;
}