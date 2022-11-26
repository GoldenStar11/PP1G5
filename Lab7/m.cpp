#include <bits/stdc++.h>

using namespace std;
/*
void s1mple(int n){
    if(n == 0) return;
    s1mple(n-1);
    cout << n << ' ';
}
*/

void s1mple(int i, int n){
    if(i > n) return;
    cout << i << ' ';
    s1mple(i+1,n);
}

int main(){
    int n;
    cin >> n;
    s1mple(1,n);
}