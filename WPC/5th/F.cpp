#include <bits/stdc++.h>
using namespace std;

int hs[15] = {0};
int arr[15];

bool judge(int x) {
    while(x) {
        if(!hs[x % 10]) return false;
        x /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
        hs[arr[i]]++;
    }
    int x, y, z, count = 0;
    for(int i = 0;i < n;i++) {
        x = arr[i];
        for(int j = 0;j < n;j++) {
            y = x * 10 + arr[j];
            for(int k = 0;k < n;k++) {
                z = y * 10 + arr[k];
                for(int p = 0;p < n;p++) {
                    for(int q = 0;q < n;q++) {
                        int tmp = arr[p] * 10 + arr[q];
                        if(z * tmp < 10000 && arr[p] * z < 1000 && arr[q] * z < 1000 && judge(arr[p] * z) && judge(arr[q] * z) && judge(tmp * z)) {
                            count++;
                        }
                    }
                } 
            }
        }
    }
    cout << count << endl;
    return 0;
}