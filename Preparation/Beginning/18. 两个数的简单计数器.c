#include <stdio.h>
int main()
{
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch (op) {
        case '+' : printf("%d\n", a + b); break;
        case '-' : printf("%d\n", a - b); break;
        case '*' : printf("%d\n", a * b); break;
        case '/' : printf("%d\n", a / b); break;
        case '%' : printf("%d\n", a % b); break;
        default  : printf("ERROR\n");
    }
    return 0;
}