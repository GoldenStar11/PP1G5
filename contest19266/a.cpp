#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    vector <int> v;
    for(int i = 0; i < k; i++){
        int c;
        cin >> c;
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(a[j] == c){
                cnt++;
            }
        }
        v.push_back(cnt);
        //cout << cnt << endl;
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}