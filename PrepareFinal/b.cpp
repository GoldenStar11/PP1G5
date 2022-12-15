#include <bits/stdc++.h>

using namespace std;

int a[10];

int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        a[n]++; // a[5] = 0 -> 1 -> 2     i = n = 5   a[5] = cnt 
    }
    for(int i = 1; i < 10; i++){
        cout << a[i] << ' ';
    }
}