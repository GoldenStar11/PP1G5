#include <bits/stdc++.h>

using namespace std;

int a[101][101];

int main(){
    int w,h;
    cin >> w >> h;
    int n;
    cin >> n;
    int x1,x2,y1,y2;
    /*
    1 1 2 1     x1;y1 = 1;1  x2;y2 = 2;1 
    2 1 3 3     x1;y1 = 2;1  x2;y2 = 3;3
    */
    for(int c = 0; c < n; c++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++){ //2 3
            for(int j = y1; j < y2; j++){ // 1 3
                a[i][j] = 1; // a[2][1] = 1, a[2][2] = 1
            }
        }
    }
    /*
        5 6
        0 0 0 0 0 0
        0 0 0 0 0 0
        0 1 1 0 0 0
        0 0 0 0 0 0
        0 0 0 0 0 0  28     
    */
    int cnt = 0;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            if(a[i][j] == 0){
                cnt++;
            }
        }
    }
    cout << cnt;
}

