#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    pair<string, int> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        if(a[i].first == "Red")
        cout << a[i].first << ' ' << a[i].second << endl;
    }
    for(int i = 0; i < n; i++){
        if(a[i].first == "Orange")
        cout << a[i].first << ' ' << a[i].second << endl;
    }
    for(int i = 0; i < n; i++){
        if(a[i].first == "Yellow")
        cout << a[i].first << ' ' << a[i].second << endl;
    }
    for(int i = 0; i < n; i++){
        if(a[i].first == "Green")
        cout << a[i].first << ' ' << a[i].second << endl;
    }
    for(int i = 0; i < n; i++){
        if(a[i].first == "Blue")
        cout << a[i].first << ' ' << a[i].second << endl;
    }
    for(int i = 0; i < n; i++){
        if(a[i].first == "Indigo")
        cout << a[i].first << ' ' << a[i].second << endl;
    }
    for(int i = 0; i < n; i++){
        if(a[i].first == "Purple")
        cout << a[i].first << ' ' << a[i].second << endl;
    }
}