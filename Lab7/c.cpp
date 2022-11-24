#include <bits/stdc++.h>

using namespace std;

bool bin(int a[], int n, int x, int j){
    if(j >= n) return false;
    if(a[j] == x) return true;
    return bin(a,n,x,j+1);
}

int main(){
    int n,x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;
    if(bin(a,n,x,0)) cout << "Yes";
    else cout << "No";
}