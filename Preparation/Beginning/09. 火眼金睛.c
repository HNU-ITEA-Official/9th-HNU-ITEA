#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("true\n");
    else
        printf("false\n");
    return 0;
}