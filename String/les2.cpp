#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; //Hello, World! 
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){ // s.size() == s.length() 
        if(s[i] >= 'A' && s[i] <= 'Z'){ //s - string, s[i] - char
            s[i] += 32;
        }
    }
    cout << s;
}