第五题
#include<stdio.h>
int nums[100000] = {0};
int ans[100000] = {0};
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
        long long sum[100010] = {0};
        for(int i = 0; i < n; i++) {
            sum[i + 1] = nums[i] + sum[i];
        }
        for(int i = 0; i < n; i++){
            if(i - k < 0 || i + k >= n){
                ans[i] = -1;
            }
            else{
                ans[i] = (sum[i + k + 1] - sum[i - k]) / (2 * k + 1);
            }
        }
    printf("%d", ans[0]);
    for(int i = 1; i < n; i++) {
        printf(" %d", ans[i]);
    }
    return 0;
}
