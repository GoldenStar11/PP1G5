#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> v1;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        v1.push_back(a);
    }
    vector <string> v2;
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        string a;
        cin >> a;
        v2.push_back(a);
    }
    for(int i = 0; i < v1.size(); i++){
        bool flag = false;
        for(int j = 0; j < v2.size(); j++){
            if(v1[i] == v2[j]){
                flag = true;
                break;
            }
        }
        if(!flag) cout << v1[i] << endl;
    }
    for(int i = 0; i < v2.size(); i++){
        bool flag = false;
        for(int j = 0; j < v1.size(); j++){
            if(v2[i] == v1[j]){
                flag = true;
                break;
            }
        }
        if(!flag) cout << v2[i] << endl;
    }
}