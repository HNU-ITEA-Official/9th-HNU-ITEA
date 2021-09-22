#include <stdio.h>
int main()
{
    int num, data;
    scanf("%d %d", &num, &data);
    if (num == 1)
        printf("%d\n", data);
    else if (num == 2)
        printf("%lf\n", data * 1.0);
    else
        printf("%c\n", data);
    return 0;
}