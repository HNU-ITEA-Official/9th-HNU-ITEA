#include <stdio.h>
#include <math.h>
int main()
{
    int num, d;
    scanf("%d %d", &num, &d);
    switch (num) {
        case  9: printf("%lf %lf\n", 4 * 3.14 * d * d, 4 * 3.14 / 3 * d * d * d); break;
        case 10: printf("%lf %lf\n", 6.0 * d * d, d * 1.0 * d * d); break;
        case 11: printf("%lf %lf\n", d * d * sqrt(3), sqrt(2) * d * d * d / 12); break;
        default: printf("It turned out that the clown was me\n");
    }
    return 0;
}