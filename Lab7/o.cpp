#include <bits/stdc++.h>

using namespace std;

string s = "";

string dectok(int n, int k){
    if(n == 0){
        reverse(s.begin(), s.end());
        return s;
    } 
    if(n % k < 10){
        s += (n % k + 48);
    }
    else{
        s += (n % k + 55);  
    }
    return dectok(n/k, k);
}

int main(){
    int n,k;
    cin >> n >> k;
    cout << dectok(n, k); 
}