#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    v.push_back(5);
    v.push_back(12);
    v.push_back(404);
    v.push_back(852);
    v.push_back(13);
    // 404 852
    //v.pop_back();
    sort(v.begin(), v.end());
    v.erase(v.begin(), v.end() - 2); // 0;3
    //reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << ' '; // v[i] = v.at(i)
    }

}