#include <iostream>

using namespace std;

int main(){
    int n , m;  
    cin >> n >> m;
    int a[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            a[i][j]= 0;
        }
    }
    int k;
    cin >> k;
    int kvad[k][4];
    for(int i = 0;i < k;i++){
        for(int j = 0;j < 4;j++){
            cin >> kvad[i][j];
        }
    }
    for(int i = 0; i < k;i++){
        for(int j = 0; j <4 ;j++ ){
            cout << kvad[i][j] << " "; 
        }
        cout << endl;
    }

    for(int c = 0; c < k;c++){
        int x1 = kvad[c][0] ;
        int y1 = kvad[c][1];
        int x2 = kvad[c][2];
        int y2 =kvad[c][3];
        for(int i = x1; i < x2;i++){
            for(int j = y1; j < y2 ;j++){
                a[i][j] = 1;
            }
        }
    }
    //  for(int i = 0;i < n;i++){
    //     for(int j = 0;j < m;j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int cnt = 0;
    for(int i = 0;i < n;i++ ){
        for(int j = 0;j < m;j++){
            if( a[i][j] == 0){
                cnt++;
            }
        }
    }
    cout << cnt;



}