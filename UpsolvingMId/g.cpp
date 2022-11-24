#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,d; 
    cin >> n >> m >> d;
    if(d == 1){
        for(int i = n; i <= m; i++){
            int c = sqrt(i); 
            if(c * c == i) cout << i << ' ';
        }
    }
    else{
        for(int i = m; i >= n; i--){
            int c = sqrt(i); 
            if(c * c == i) cout << i << ' ';
        }
    }
}