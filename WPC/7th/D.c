第四题
#include<stdio.h>
    int nums[1000010] = {0};
    int n;
    void swap(int *a, int *b) {
        int t = *a;
        *a = *b;
        *b = t;
    }
    int function(int l, int r) {
        int mid = (l + r) / 2;
        swap(&nums[mid], &nums[r]);
        int i = l, j = l;
        while(j < r) {
             if(nums[j] < nums[r]) {
                swap(&nums[j], &nums[i]);
                i++;
            }
            j++;
        }
        swap(&nums[i], &nums[r]);
        return i;
    }
    void quilk(int l, int r) {
        if(l >= r) return;
        int a = function(l, r);
        quilk(l, a - 1);
        quilk(a + 1, r);
    }
    int lower_bound(int target) {
        int l = 0, temp = n, r = n - 1, mid, f = 0;
        while(l <= r) {
            mid = (l + r) / 2;
            if(nums[mid] > target) r = mid - 1;
            else if(nums[mid] == target) {
                f = 1;
                break;
            }
            else l = mid + 1;
        }
        while(f == 1 && mid >= 0 && nums[mid] == target) {
            temp = mid;
            mid--;
        }
        return temp;
    }

int main() {
    int target;
    scanf("%d %d", &n, &target);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    quilk(0, n - 1);
    int it,f = 0;
    it = lower_bound(target);
    while(it < n) {
        if(nums[it] == target) {
            printf("%d\n", it);
            f = 1;
            it++;
        }
        else
            break;
    }
    if(!f) printf("-1\n");
    return 0;
}
