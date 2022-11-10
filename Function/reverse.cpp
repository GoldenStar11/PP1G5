#include <bits/stdc++.h>

using namespace std;

string reverse(string s){
    string srev = s; //Hello
    int j = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        srev[j] = s[i]; //H = o e = l l = l e = o o = H
        j++; 
    }
    return srev;
}

int main(){
    string s;
    getline(cin, s);
    cout << reverse(s);
}