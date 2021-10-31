#include <stdio.h>
int main() {
    int n;
    double h;
    scanf("%lf %d", &h, &n);
    for(int i = 0;i < n;i++) h /= 2;
    printf("%.4lf", h);
    return 0;
}