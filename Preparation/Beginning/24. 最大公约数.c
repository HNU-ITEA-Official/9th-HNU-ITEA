#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int div = n;
    while (div > 1) {
        if (n % div == 0 && m % div == 0) break;
        div--;
    }
    printf("%d\n", div);
    return 0;
}