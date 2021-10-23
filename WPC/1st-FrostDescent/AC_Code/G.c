#include<stdio.h>
int main()
{
    int nums[10], high, count = 0;
    for(int i = 0; i < 10; i++)
        scanf("%d", &nums[i]);
    scanf("%d", &high);
    for(int i = 0; i < 10; i++){
        if(nums[i] <= high + 30){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}