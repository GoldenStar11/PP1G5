#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    v.push_back(5);
    v.push_back(12);
    v.push_back(404);
    v.push_back(852);
    v.push_back(13);

    //v.clear();    
    if(v.empty() == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << ' '; // v[i] = v.at(i)
    }

}