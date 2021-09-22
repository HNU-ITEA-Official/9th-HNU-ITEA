#include <stdio.h>
int main()
{
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    if (op == '+')
        a = a + b;
    else
        a = a - b;
    printf("%d\n", a);
    return 0;
}