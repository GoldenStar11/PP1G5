#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n-1; i > n/2 - 1; i--){
        int reversed_number = 0;
        while(a[i] != 0) {/*
        2910
        */
            int remainder = a[i] % 10;  // 0 1 9 2
            reversed_number = reversed_number * 10 + remainder; //0  1 19 190 + 2 = 192
            a[i] /= 10; //91 9 2 0
        }
        a[i] = reversed_number; // 19
    }
    for(int i = 0; i < n; i++){
        if(a[i] != a[n-1-i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}