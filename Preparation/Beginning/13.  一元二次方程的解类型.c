#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int delta = b * b - 4 * a * c;
    if (delta == 0)
        printf("Same\n");
    else if (delta > 0)
        printf("Different\n");
    else
        printf("No Answer\n");
    return 0;
}