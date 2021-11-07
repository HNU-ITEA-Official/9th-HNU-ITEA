#include <stdio.h>

int main() {
    int _;
    scanf("%d", &_);
    while (_--) {
        int n;
        scanf("%d", &n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int num;
            scanf("%d", &num);
            sum += num;
        }
        if (sum >= n)
            printf("%d\n", sum - n);
        else
            printf("1\n");
    }
    return 0;
}
