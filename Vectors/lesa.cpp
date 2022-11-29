#include <bits/stdc++.h>

using namespace std;

int main(){
    /*v.push_back(4);
    v.push_back(11);
    v.push_back(101);*/
    // 4 11 101
    int n;
    cin >> n;
    vector <int> v(n); // vector(вектор) <тип переменных(то что внутри вектора)> название вектора
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    /*for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }*/
    v.push_back(5);
    v.insert(v.begin() + 2, 808);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }

}