#include <stdio.h>
int main()
{
    char letter;
    int num;
    scanf("%c %d", &letter, &num);
    if (num == 32)
        printf("success\n");
    else if ('A' <= letter - num && letter - num <= 'Z')
        printf("variation\n");
    else
        printf("sympathy\n");
    return 0;
}