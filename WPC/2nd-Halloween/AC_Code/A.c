#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    int count = 0, rub = 0, tor = 0;
    while(t > 0) {
        rub += 9;
        tor += 3;
        t--;
        count++;
        if(count % 10 == 0 && rub > tor) {
            count += 30;
            t -= 30;
            tor += 90;
        }
    }
    tor -= -t * 3;
    if(rub > tor) printf("^_^ %d", rub);
    else if(rub < tor) printf("@_@ %d", tor);
    else printf("-_- %d", rub);
    return 0;
}