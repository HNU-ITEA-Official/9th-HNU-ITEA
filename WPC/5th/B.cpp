#include <stdio.h>
#include <string.h>
#define N 100010

char str[N];

int main()
{
    scanf("%s", str);
    int l = 0, r = strlen(str) - 1;
    while(l < r){
        char c = str[l];
        str[l ++] = str[r];
        str[r --] = c;
    }
    printf("%s", str);
}