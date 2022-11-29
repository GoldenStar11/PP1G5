#include <bits/stdc++.h>

using namespace std;

bool f(int n){
    if(n == 1) return true;
    if(n == 2 || n == 3 || n == 5 || n == 8) return false;
    return f(n-3);
}
int main(){
    int n;
    cin >> n;
    if(f(n)) cout << "YES";
    else cout << "NO";
}