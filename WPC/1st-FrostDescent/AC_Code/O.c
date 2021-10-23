#include <stdio.h>
#define MAXN 100000

int binary_search(int nums[], int x, int n) {
    int lo = 0, hi = n - 1;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < x)       lo = mid + 1;
        else if (nums[mid] >= x) hi = mid;
    }
    return nums[lo] == x ? lo : -1;
}

int main() {
    int _;
    scanf("%d", &_);
    while (_--) {
        int n, m;
        int nums[MAXN + 1];
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; ++i)
            scanf("%d", &nums[i]);
        for (int i = 0; i < m; ++i) {
            int x;
            scanf("%d", &x);
            int res = binary_search(nums, x, n);
            printf("%d%c", res, (i + 1 < m ? ' ' : '\n'));
        }   
    }
    return 0;
}