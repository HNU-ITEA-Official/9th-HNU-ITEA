#include <stdio.h>
#include <math.h>
#define MAXN 5

int main() {
    int _;
    scanf("%d", &_);
    while (_--) {
        int res, mat[MAXN][MAXN];
        for (int i = 0; i < MAXN; ++i)
            for (int j = 0; j < MAXN; ++j) {
                scanf("%d", &mat[i][j]);
                if (mat[i][j] == 1)
                    res = abs(i - 2) + abs(j - 2);
            }
        printf("%d\n", res);
    }
    return 0;
}