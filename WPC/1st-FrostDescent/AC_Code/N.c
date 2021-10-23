#include <stdio.h>
#include <string.h>
#define MAXLEN 200

int main() {
    int _;
    scanf("%d", &_);
    while (_--) {
        char code[MAXLEN + 1];
        scanf("%s", code);
        int n = strlen(code);
        for (int i = 0; i < n; ++i) {
            if (code[i] == '.') printf("0");
            else {
                if (code[i + 1] == '.') printf("1");
                else                    printf("2");
                i++;
            }
        }
        printf("\n");
    }
    return 0;
}