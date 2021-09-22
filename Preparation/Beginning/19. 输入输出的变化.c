#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d %.2lf %c\n", num, num * 1.0, num);
    return 0;
}