#include <stdio.h>
#define MAX 100010
int main() 
{
    int n;
    scanf("%d", &n);
    int I, S;
    int arr[MAX] = {0};
    for(int i = 0;i < n;i++) {
        scanf("%d %d", &I, &S);
        arr[I] += S; 
    }
    int  Max = -1, ID = 1;
    for(int i = 1;i < 1e5 + 10;i++) {
        if(arr[i] > Max) {
            Max = arr[i];
            ID = i;
        }
    }
    printf("%d %d",ID, Max);
    return 0;
}