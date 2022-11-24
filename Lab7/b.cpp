#include <bits/stdc++.h>

using namespace std;

string s = "";

string toBin(int n){
    if(n == 0){
        reverse(s.begin(), s.end()); 
        return s;
    }
    s += char(n % 2 + 48);
    return toBin(n/2);
} 

int main(){
    int n;
    cin >> n; 
    cout << toBin(n);
}