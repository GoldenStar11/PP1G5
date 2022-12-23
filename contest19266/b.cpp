#include <bits/stdc++.h>

using namespace std;

int main(){
    char a[9][9];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            a[i][j] = '0';
        }
    }
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char c;
        int d;
        cin >> c >> d;
        a[c-65][d-1] = '*';
    }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}