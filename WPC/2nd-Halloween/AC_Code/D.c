#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 105

int main() {
    char s1[MAX], s2[MAX];
    scanf("%s %s", s1, s2);
    int len = strlen(s1);
    bool flag = true;
    for(int i = 0;i < len;i++) { //全按小写判断
        if(isupper(s1[i])) s1[i] += 32;
        if(isupper(s2[i])) s2[i] += 32;
        if(s1[i] > s2[i]) {
            printf("1\n");
            flag = false;
            break;
        }
        else if(s1[i] < s2[i]) {
            printf("-1\n");
            flag = false;
            break;
        }
    }
    if(flag) printf("0\n");
    return 0;
}