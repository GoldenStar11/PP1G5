#include <iostream>

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
    bool t;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == a[j][i]){
                t = true;
            }
            else{
                t = false;
                break;
            } 
        }
    }
    if(t) cout << "yes";
    else cout << "no";
}