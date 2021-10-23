#include<stdio.h>
int main()
{
    int n;
    int foot, inch;
    scanf("%d", &n);
    inch = n / 30.48 * 12;
    foot = inch % 12;
    inch /= 12;
    printf("%d %d", inch, foot);
    return 0;
}