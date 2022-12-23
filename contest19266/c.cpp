#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, int> mp;
    for(int i = 0; i < n; i++){
        char c,d,e;
        int a,b;
        cin >> c >> d >> a >> e >> b;
        string s = string(1, d) + ' ' + string(1, c) + ' ' + string(1, e) + " =";
        if(c == '+') mp[s] = a + b;
        else if(c == '-') mp[s] = a - b;
        else mp[s] = a * b;
    }
    map <string, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << ' ' << it -> second << endl;
    }
}