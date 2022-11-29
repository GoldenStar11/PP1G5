#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m]; // a[6][5]
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    /*  0 1 2 3 4
      0 1 3 5 7 8 
      1 2 3 4 7 9
      2 4 8 9 7 3
      3
      4
      5
    */
    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < m - 1; j++){
            if(a[i][j+1] > a[i][j]) swap(a[i][j], a[i][j+1]);
        }
    }
    int sum = 0, max = INT_MIN, summax = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += a[i][j];
            if(max < a[i][j]) max = a[i][j];
        }
        if(summax < sum) summax = sum;
        sum = 0;
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
        BWBWBWBW     
        WBWBWBWB
        BWBWBWBW
        WBWBWBWB
        BWBWBWBW
        WBWBWBWB
        BWBWBWBW
        WBWBWBWB
        if(i % 2 == 0){if(j%2==0) a[i][j] == 'B'  else a[i][j] = 'W'}
        else{if(j%2==0) a[i][j] == 'W'  else a[i][j] = 'B'}
        0 0 0 
        0 0 0
        0 0 0
    */
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    
     
}