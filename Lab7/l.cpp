#include <bits/stdc++.h>

using namespace std;

bool palmer(string s, int i){
    if(i == s.size()) return true;
    if(s[i] != s[s.size() - 1 - i]) return false;
    return palmer(s, i+1);
} 
int main(){
    string s;
    cin >> s;
    if(palmer(s,0)) cout << "Yes";
    else cout << "No";
}