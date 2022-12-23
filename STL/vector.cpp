#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.push_back(11);
    v.insert(v.begin() + 1, 23);
    v.erase(v.begin() + 2, v.begin() + 4);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}