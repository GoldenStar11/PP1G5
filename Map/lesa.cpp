#include <bits/stdc++.h>

using namespace std;

int main(){
    stack <int> s;
/*
    s.push(5);
    s.push(7);
    s.push(70);
    s.push(40);
    s.push(6);
    s.push(1254);

    cout << s.top();*/
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        s.push(a);
    }
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    
}