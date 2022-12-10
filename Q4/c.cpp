#include <bits/stdc++.h>

using namespace std;

int main(){
    stack <int> st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }
    string s;
    while(cin >> s){
        if(s == "Sale"){
            st.pop();
        }
        else if(s == "Add"){
            int a;
            cin >> a;
            st.push(a);
        }
        else if(s == "End"){
            break;
        }
    }
    vector <int> v;
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();7\
    
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}