#include <stdio.h>
#include <stdbool.h>

struct Price
{
    double sum;
    double sumprice;
    double unitprice;
};

void Bubble_sort(struct Price P[], int n) {
    for(int i = n - 1;i > 0;i--) {
        for(int j = 1;j <= i;j++) {
            if(P[j - 1].unitprice > P[j].unitprice) {
                struct Price *P = &P[j];
                P[j] = P[j - 1];
                P[j - 1] = *P;
            }
        }
    }
}

int main()
{
    int N,D;
    scanf("%d %d",&N,&D);
    struct Price P[N];
    for(int i = 0;i < N;i++){
        scanf("%lf",&P[i].sum);
    }
    for(int i = 0;i < N;i++){
        scanf("%lf",&P[i].sumprice);
    }
    for(int i = 0;i < N;i++){
        P[i].unitprice = P[i].sumprice/P[i].sum;
    }

    for(int i = N - 1;i > 0;i--) {
        for(int j = 1;j <= i;j++) {
            if(P[j - 1].unitprice > P[j].unitprice) {
                struct Price p = P[j - 1];
                P[j - 1] = P[j];
                P[j] = p;
            }
        }
    }

    double money = 0;
    for(int i = N-1;i >= 0;i--){
        if(D > P[i].sum){
            money += P[i].sumprice;
            D -= P[i].sum;
        }
        else if(D < P[i].sum){
            money += D * P[i].unitprice;
            break;
        }
        else{
            money += P[i].sumprice;
            break;
        }
    }
    printf("%.2lf",money);
    return 0;
}