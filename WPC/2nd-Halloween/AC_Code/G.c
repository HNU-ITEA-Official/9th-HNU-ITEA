#include <stdio.h>
#include <stdbool.h>

int BinarySearch(int arr[], int l, int r, int target) {
    while(l <= r) {
        int mid = (l + r) >> 1;
        if(target > arr[mid]) l = mid + 1;
        else if(target < arr[mid]) r = mid - 1;
        else return mid;
    }
    return -1;
}

int main() {
    int n, l, tmp;
    scanf("%d %d", &n, &l);
    int arr[n];
    bool flag = false;
    for(int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0;i < n;i++) {
        tmp = l - arr[i];
        if(BinarySearch(arr, i + 1, n, tmp) != -1) {
            printf("YES\n");
            flag = true;
            break;
        }
    }
    if(!flag) printf("NO\n");
    return 0;
}