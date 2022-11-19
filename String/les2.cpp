#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; //Hello, World!
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){ // s.size() == s.length() == 13 
        if(s[i] >= 'a' && s[i] <= 'z'){ //s - string, s[i] - char
            s[i] = s[i] - 32;  //72 = 72 + 32 = 104 - h
        }
    }
    cout << s;
}