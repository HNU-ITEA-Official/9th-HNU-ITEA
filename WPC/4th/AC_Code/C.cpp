#include <stdio.h>
#include <string.h>

#define N 100010

char a[N];

int main()
{
	scanf("%s", a);
	int ret = -1;
	for (int i = strlen(a) - 1; i >= 0; i --){
		if((a[i] - '0') % 2 == 1) {
			ret = i;
			break;
		}
	}
	if(ret != -1){
		for (int i = 0;i <= ret; i ++)
			printf("%c", a[i]);
	}
	else printf("-1");
	
	return 0;
}
