#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, s2;
    cin >> s >> s2;
    /*getline(cin, s);
    s2 = s;
    s[0] = 'B';
    s[3] = '?';
    s[5] = '*';*/
    if(s > s2){
        cout <<"S greater" << endl;
    }
    else if(s < s2){
        cout << "S2 greater" << endl;
    }
    else{
        cout << "Equal";
    }
}