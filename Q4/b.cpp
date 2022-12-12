#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <vector<int> > v;
    vector <int> vec;
    int n; 
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int b;
            cin >> b;
            if(b != 0)  vec.push_back(b);
        }
        if(s == "Inc"){
            sort(vec.begin(), vec.end());
        }
        else if(s == "Dec"){
            sort(vec.rbegin(), vec.rend());
        }
        while(vec.size() != n){
            vec.push_back(0);
        }
        v.push_back(vec);
        vec.clear();
    }
     for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}