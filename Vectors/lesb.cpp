#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    v.push_back(5);
    v.push_back(12);
    v.push_back(404);
    v.push_back(852);
    v.push_back(13);

    //v.erase(v.begin(), v.begin() + 3);
    sort(v.begin(), v.end());
    v.pop_back();
    //reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << ' '; // v[i] = v.at(i)
    }

}