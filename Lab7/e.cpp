#include <bits/stdc++.h>

using namespace std;

bool degRec(long long n, int i){
    if(i >= 63) return false;
    if(pow(2,i) == n) return true;
    return degRec(n, i+1); 
}

int main(){
    long long n;
    cin >> n; 
    if(degRec(n,0)) cout << "Yes";
    else cout << "No";
}