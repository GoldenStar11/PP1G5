#include <bits/stdc++.h>

using namespace std;

string name(string s){
    return s;
}

string hello(string s){
    return "Hello, " + name(s);  // John
}

int main(){
    string s;
    cin >> s;
    cout << hello(s); // Hello, John
}