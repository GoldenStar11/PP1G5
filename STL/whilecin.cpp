#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    int n;
    while(cin >> n){
        v.push_back(n);
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0)   cout << v[i] << ' ';
    }
}