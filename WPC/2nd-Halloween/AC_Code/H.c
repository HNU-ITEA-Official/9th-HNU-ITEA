#include <stdio.h>
#define swap(a, b) {int temp = a; a = b; b = temp;}

void bubble_sort(int seq[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (seq[j] < seq[j + 1])
                swap(seq[j], seq[j + 1]);
}

void select_sort(int seq[], int n) {
    for (int i = 0; i < n; ++i) {
        int max = i;
        for (int j = i + 1; j < n; ++j) {
            if (seq[j] > seq[max]) max = j;
        }
        swap(seq[i], seq[max]);
    }
}

int main() {
    int _;
    scanf("%d", &_);
    while (_--) {
        int k;
        scanf("%d", &k);
        int seq[12];
        for (int i = 0; i < 12; ++i)
            scanf("%d", &seq[i]);
        select_sort(seq, 12);
        int cnt = 0;
        while (k > 0 && cnt < 12) {
            k -= seq[cnt];
            cnt++;
        }
        if (k > 0)
            printf("-1\n");
        else
            printf("%d\n", cnt);
    }
    return 0;
}
