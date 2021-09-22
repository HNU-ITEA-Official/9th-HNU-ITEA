#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'L')
        printf("Good morning Mr. Li.\n");
    else if (ch == 'Z')
        printf("Good morning Mr. Zhang.\n");
    else
        printf("Input Error!\n");
    return 0;
}