#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int max_num = -100;
    if (x > max_num) max_num = x;
    if (y > max_num) max_num = y;
    if (z > max_num) max_num = z;
    printf("%d\n", max_num);
    return 0;
}