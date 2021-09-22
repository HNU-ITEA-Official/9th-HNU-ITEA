#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num, max_num = -1234567;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > max_num) max_num = num;
    }
    printf("%d\n", max_num);
    return 0;
}