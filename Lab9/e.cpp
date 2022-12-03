#include <bits/stdc++.h>

using namespace std;

int main(){
    map <string, int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    map <string,int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it -> second == 3) cnt++;
    }
    cout << cnt;
}