#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int pos = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == m){
            pos = i + 1;
        }
    }
    for(int i = 1; i < n; i++){
        if(pos == 0 && a[i-1] < m && m < a[i]){
                pos = i;
        }  
    }     
    if(pos == 0) pos = n;
    cout << pos;
    
}