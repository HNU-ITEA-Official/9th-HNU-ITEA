#### PS
这里我实在是不会用c语言写了

写了个c++版本的，请见谅

顺便说一句这题卡空间，用正常写法会空间超出

所以我改用了**bitset开bool数组**，这样确保空间不溢出

下面是AC代码，用的是我讲的**trie树**，现阶段不要求掌握

    万恶的葛竞出的题，写半天
```c++
#include <iostream>
#include <cstring>
#include <bitset>
#define M 1010
#define N 300010
using namespace std;

int son[N][26], idx;
char c[20];
bitset<1001> cnt[N];
int n, m;

void insert(char* str, int x)
{
    int p = 0;
    for (int i = 0; i < strlen(str); i ++ )
    {
        int u = str[i] - 'a';
        if (!son[p][u]) son[p][u] = ++ idx;
        p = son[p][u];
    }
    cnt[p][x] = 1;
}

int query(char* str)
{
    int p = 0;
    for (int i = 0; i < strlen(str); i ++)
    {
        int u = str[i] - 'a';
        if (!son[p][u]) return 0;
        p = son[p][u];
    }
    return p;
}

int main()
{
	
    scanf("%d", &n);
    for (int i = 1;i <= n;i ++){
        scanf("%d", &m);
        for (int j = 0;j < m; j ++){
            scanf("%s", c);
            insert(c, i);
        }
    }

    scanf("%d", &m);
    while(m --)
    {
        scanf("%s", c);
        int p = query(c);
        for (int i = 1; i < M; i ++)
        	if(cnt[p][i] == 1) printf("%d ", i);
        printf("\n");
    }
    return 0;
}
```