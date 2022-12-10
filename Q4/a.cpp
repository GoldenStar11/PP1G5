#include <bits/stdc++.h>

using namespace std;

int main(){
    map <string, int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        mp[s]++;
    }
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        string str;
        cin >> str;
        if(mp.count(str)) mp[str] = 777;
    }
    cout << endl;
    map <string, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it->second == 1) cout << it->first << endl;
    }
}