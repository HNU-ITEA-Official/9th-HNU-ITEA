#include <stdio.h>
#include <math.h>
#define N 10010

int  t;
double y;
bool check(double x)
{
    return 2018 * x * x * x * x + 21 * x + 5 * x * x * x + 5 * x * x + 14 - y >= 0;
}

int main()
{
    scanf("%d", &t);
    while (t --){
        scanf("%lf", &y);
        if(y - 14 < 0) {
            printf("-1\n");
            continue;
        }
        double l = 0, r = 100;
        for(int i = 0; i < 100; i ++){
            double mid = (l + r) / 2;
            if(check(mid)) r = mid;
            else l = mid;
        }
        printf("%.4f\n", r);
    }
}