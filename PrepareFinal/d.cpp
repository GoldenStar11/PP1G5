#include <bits/stdc++.h>

using namespace std;
int a[21][21];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }/*
    1 2 3 
    4 5 6
    7 8 9
    
    7 4 1
    8 5 2
    9 6 3

    a[2][0] a[1][0] a[0][0]
    a[2][1] a[1][1] a[0][1]
    a[2][2] a[1][2] a[0][2]
    */
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            cout << a[j][i] << ' ';
        }
        cout << endl;
    }
}