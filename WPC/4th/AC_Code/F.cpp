#include <stdio.h>
#include <string.h>

#define N 110

char a[N];
int b[26], max_n = -1, min_n = 110;

bool isPrime(int x)
{
	if(x <= 1) return false; 
	for (int i = 2; i <= x / 2; i ++)
		if(x % i == 0) return false;
	return true;
}
int main()
{
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i ++){
		int x = a[i] - 'a';
		b[x] ++;
	}
	for (int i = 0; i < 26; i ++){
		if(b[i] != 0 && b[i] < min_n) min_n = b[i];
		if(b[i] > max_n) max_n = b[i];
	}
	int x = max_n - min_n;
	if(isPrime(x))  printf("Lucky Word\n%d", x);
	else printf("No Answer\n0");
	
	return 0;
}
