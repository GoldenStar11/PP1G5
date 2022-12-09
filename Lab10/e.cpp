#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double sum = 0;
    cin >> n;
    map <string, double> mp;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            string s;
            double a;
            cin >> s >> a;
            mp[s] += a;
            sum += a;
        }
    }
    map <string, double> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << ' ' << (it -> second * 100 / sum) << endl;
    }
}