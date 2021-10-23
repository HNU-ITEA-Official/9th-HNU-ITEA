#include<stdio.h>
#include<stdbool.h>

bool isprime(int x){
    for(int i = 2; i <= x /2; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int x = 2;
    while(n) {
        int flag = 0;
        if(isprime(x)) {
            n--;
            sum += x;
        }
        x++;
    }
    printf("%d\n", sum);
    return 0;
}