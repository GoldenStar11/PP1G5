#include <bits/stdc++.h>

using namespace std;

int main(){
    /*int n;
    cin >> n;
    vector <int> v1;
    vector <int> v2;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x % 2 == 0) v1.push_back(x);
        else v2.push_back(x);
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.begin(), v2.end());

    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << ' '; 
    }
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << ' ';
    }*/
    int n;
    cin >> n;
    map <int,string> mp;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a % 2 == 0) mp[a] = "Even";
        else mp[a] = "Odd";
    }
    map <int, string> :: reverse_iterator it;
    for(it = mp.rbegin(); it != mp.rend(); it++){
        if(it->second == "Even") cout << it->first << ' ';
    }
    map<int,string> :: iterator i;
    for(i = mp.begin(); i != mp.end(); i++){
        if(i->second == "Odd") cout << i->first << ' ';
    }
}