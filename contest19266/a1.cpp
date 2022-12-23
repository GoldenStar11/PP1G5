#include <bits/stdc++.h>

using namespace std;
int a[9][9];

int main(){
    int n;
    cin >> n;
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    int k;
    cin >> k;
    vector <int> v;
    for(int i = 0; i < k; i++){
        int b;
        cin >> b;
        if(mp[b]) v.push_back(mp[b]);
        else v.push_back(0); 
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}