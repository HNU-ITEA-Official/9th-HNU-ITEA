#include <stdio.h>

int main() {
    int _;
    scanf("%d", &_);
    while (_--) {
        int grid[5][5] = {0};
        for (int i = 1; i <= 3; ++i)
            for (int j = 1; j <= 3; ++j)
                scanf("%d", &grid[i][j]);
        for (int i = 1; i <= 3; ++i) {
            for (int j = 1; j <= 3; ++j) {
                int res = grid[i][j] + grid[i][j + 1] + 
                grid[i + 1][j] + grid[i][j - 1] + grid[i - 1][j];
                printf("%d", (res % 2 ? 0 : 1));
            }
            printf("\n");
        }
    }
    return 0;
}