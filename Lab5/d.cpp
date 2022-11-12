#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    string c = s; 
    reverse(c.begin(), c.end());
    /*for(int i = 0; i < s.size(); i++){
        c[i] = s[s.size() - 1 - i]; 
    } // tset */
    if(s == c) cout << "YES";
    else cout << "NO";
}