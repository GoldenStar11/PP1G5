#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int cnt = 0;
    cin >> n;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++){
        if (it->second >= 2){
            cnt++;
        }
    }
    cout << cnt;
}