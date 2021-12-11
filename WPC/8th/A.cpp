#include <stdio.h>
#include <string.h>
#define N  10010

char str[N];

int main()
{
    scanf("%s", str);
    int a[4] = {0};
    char b[] = "+-*/";
    for (int i = 0; i < strlen(str); i ++)
    {
        for(int j = 0; j < 4;j ++)
            if(str[i] == b[j]) {
                a[j] ++;
                break;
            }
    }
    for (int i = 0; i < 4; i ++)
        printf("%c %d\n", b[i], a[i]);
    return 0;
}
