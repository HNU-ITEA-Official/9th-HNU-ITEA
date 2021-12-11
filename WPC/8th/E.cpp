#include <stdio.h>
#include <string.h>
#define N 1010

char a[N], b[N];

int main()
{
    scanf("%s %s", a, b);
    int i = 0, j = 0;
    while(i < strlen(a) && j < strlen(b))
    {
        if(a[i] == b[j]){
            i ++, j ++;
        }
        else i ++;
    }
    if(j == strlen(b)) printf("YES\n");
    else printf("NO\n");
    return 0;
}