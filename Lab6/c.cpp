#include <bits/stdc++.h>

using namespace std;

int a1[100], b1[100];

void howmany(int a[], int b[], int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){ /*
        6
        4 3 1 2 4 1
        3 1 1 5 4 4
    */               // 1 2 3 4 5 6 7 8 9 10 11
        a1[a[i]]++;  // 2 1 1 2 0 0 0 0 0 0  0
        b1[b[i]]++;  // 2 0 1 2 1 0 0 0 0 0  0
    }
    for(int i = 1; i <= 100; i++){
        cnt += min(a1[i], b1[i]); // cnt += 2 + 1 + 2 = 5 
    }
    cout << cnt;
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    howmany(a,b,n);
}