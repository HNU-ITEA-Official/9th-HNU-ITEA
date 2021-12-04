第六题
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char s[1000];
    scanf("%s", s);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'H')
                ans++;
            else 
                ans = 0;
            if(ans > 2) {
                printf("-1");
                    return 0;
            }
        }
        ans = 0;
        for(int i = 1;i < n; i++) {
            if(s[i] == '.') {
                if(s[i - 1] == 'H' && s[i + 1] == 'H') {
                    s[i - 1] = '1';
                    s[i + 1] = '1';
                    ans++;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            if(s[i] == 'H'){
                if(i - 1 >= 0 && s[i - 1] == '.' || i +1 < n && s[i + 1] == '.'){
                    ans++;
                }
                else {
                    printf("-1");
                    return 0;
                 }
            }
        }
        printf("%d", ans);
    return 0;
}
