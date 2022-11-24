#include <bits/stdc++.h>

using namespace std;

int degRec(int n){
    if(n == 0) return 1;
    return 2 * degRec(n-1); 
}

int main(){
    int n;
    cin >> n; 
    cout << degRec(n);
}