#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int p = 2;
    while (p < num) {
        if (num % p == 0) break;
        p++;
    }
    if (p == num)
        printf("Yes\n");
    else 
        printf("No\n");
    return 0;
}