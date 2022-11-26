#include <bits/stdc++.h>

using namespace std;

bool cheater(int a[], int n, int k, int i){
    if(i == n) return false;
    if(a[i] - a[i-1] <= k) return true;
    return cheater(a,n,k,i+1);
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    if(cheater(a,n,k,1)) cout << "cheater";
    else cout << "no";
}
