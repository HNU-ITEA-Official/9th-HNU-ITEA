#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a % 2 == 1 && b % 2 == 0|| a % 2 == 0 && b % 2 == 1)
        printf("%lld\n", b * (b - 1) / 2 * a);
    else if (a % 2 == 1 && b % 2 == 1)
        printf("%lld\n", a * b);
    else {
        if (a > b)
            printf("%lld\n", a % b);
        else
            printf("%lld\n", b % a);
    }
    return 0;
}