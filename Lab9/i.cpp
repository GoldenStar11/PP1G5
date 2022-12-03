#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, int> mp;

    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        if(!mp[x]) cout << "new user added" << endl;
        else cout << "user already exists" << endl;
        mp[x]++;
    }
}