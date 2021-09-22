#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num > 0)
        printf("positive\n");
    else if (num < 0)
        printf("negative\n");
    else
        printf("ZERO\n");
    return 0;
}