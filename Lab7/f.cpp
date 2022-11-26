#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

int even(string n, int i){
    if(i >= n.size()) return cnt;
    if(n[i] % 2 == 0) cnt++;
    return even(n,i+1);
}

int main(){
    string n;
    cin >> n;
    cout << even(n,0);
}