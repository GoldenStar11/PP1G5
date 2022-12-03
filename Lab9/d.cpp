#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }/*
    4 2
    1 2 2 3
    1 1 
    2 2
    3 1
    */
   bool flag = false;
    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++){
        if (it->first == k){
            flag = true;
            cout << it->second;
            break;
        }
    }
    if(!flag) cout << 0;
}