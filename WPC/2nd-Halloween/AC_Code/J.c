#include <stdio.h>

#define MAXN (int)1e5


long long max(long long a, long long b) {
    return a > b ? a : b;
}

long long min(long long a, long long b) {
    return a < b ? a : b;
}

long long cherry(int seq[], int n) {
    long long res = 0;
    for (int i = 0; i + 1 < n; ++i)
        res = max(1LL * seq[i] * seq[i + 1], res);
    return res;
}

int main() {
    int _;
    scanf("%d", &_);
    while (_--) {
        int n;
        scanf("%d", &n);
        int seq[MAXN];
        for (int i = 0; i < n; ++i)
            scanf("%d", &seq[i]);
        printf("%lld\n", cherry(seq, n));    
    }
    return 0;
}
