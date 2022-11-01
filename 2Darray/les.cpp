#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < m - 1; j++){
            if(a[i][j+1] > a[i][j]) swap(a[i][j], a[i][j+1]);
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
    }
    cout << sum;  */
    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = 0;
        }
    }
    
        3 3
        1 2 3
        4 5 6
        7 8 9

        0 0 0 
        0 0 0
        0 0 0
    */
    
    for(int i = n - 1; i >= 0; i--){
        for(int j = m - 1; j >= 0; j--){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    
     
}