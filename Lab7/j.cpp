#include <bits/stdc++.h>

using namespace std;

int sum = 0;

int heat(string n, int i){
    if(i == n.size()) return sum;
    sum += (n[i] - 48) / 2;
    return heat(n,i+1);
}

int main(){
    string n;
    cin >> n;
    cout << heat(n,0);
}