#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int max1 = -1000000000, max2 = -1000000000;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > max1){
                max1 = a[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > max2 && a[i][j] != max1){
                max2 = a[i][j];
            }
        }
    }
    if(max2 == -1000000000) cout << 0;
    else cout << max2;
}