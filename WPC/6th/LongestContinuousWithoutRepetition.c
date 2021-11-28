#include <stdio.h>
#define MAX 100010
int a[MAX], hs[MAX] = {0};
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0;i < n;i++) scanf("%d", &a[i]);
    int len = 0;
    for(int i = 0, j = 0;i < n;i++) {
        while(j < n && hs[a[j]] < 1) {
            hs[a[j++]]++;
        }
        if(j - i > len) len = j - i;
        hs[a[i]]--;
    }
    printf("%d", len);
    return 0;
}