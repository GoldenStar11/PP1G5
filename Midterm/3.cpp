#include <iostream>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    cin >> k;
    /*bool t = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] >= k) t = true;
        }
    }
    if(t) cout << "Penalty";
    else cout << "Not today";
    */
   int max = INT_MIN;
   for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(max < a[i][j]){
                max = a[i][j];
            }
        }
   }
   if(k > max) {
        cout << "Not today";
   }
   else{
        cout << "Penalty";
   }
}