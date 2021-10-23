#include<stdio.h>
#define max_n 100005
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    int num[max_n];
    int flag = 0;
    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for(int i = 0; i < n; i++){
        if(nums[i] >= t){
            printf("%d\n", i);
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("-1\n");
    return 0;
}