#include <stdio.h>
int main()
{
    double f1, f2;
    int it;
    char ch;
    scanf("%lf %d %c %lf", &f1, &it, &ch, &f2);
    printf("%c %d %.2lf %.2lf\n", ch, it, f1, f2);
    return 0;
}