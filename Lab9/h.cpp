#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, int> mp;
    for(int i = 1; i <= n; i++){
        string s;


        cin >> s;
        if(mp[s]) continue; // mp[s]
        mp[s] = i;
    }
    /*
    3 ab ab cd
    ab 1
    cd 3
    */
    map <string, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << ' ' << it -> second << endl;
    } 
}