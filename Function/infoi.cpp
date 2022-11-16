#include <bits/stdc++.h>

using namespace std;

int fakt(int n){
   int r;
   for (r = 1; n > 0; n--)  
        r *= n;
   return r;
}

int bci(int n,int k){
   return fakt(n)/(fakt(k)*fakt(n-k));
}

int main(){
    int n,k;
    cin >> n >> k;
    cout << bci(n,k);
}