#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for(i = n + 1;;i++) {
        int num = i;
        int hash[10] = {0};
        bool flag = true;
        while(num) {
            if(!hash[num % 10]) {
                hash[num % 10]++;
                num /= 10;
            }
            else {
                flag = false;
                break;
            }
        }
        if(flag) break;
    }
    printf("%d", i);
    return 0;
}