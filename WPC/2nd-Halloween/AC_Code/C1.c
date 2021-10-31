#include <stdio.h>
#include <stdbool.h>
bool judge(int n) {
    char num[5];
    int index = 0;
    while(n) {
        num[index++] = n % 10;
        n /= 10;
    }
    for(int i = 0;i < 4;i++) {
        for(int j = 0;j < 4;j++) {
            if(i == j) continue;
            if(num[i] == num[j]) return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int start = n + 1;
    while(!judge(start)) {
        start++;
    }
    printf("%d", start);
    return 0;
}