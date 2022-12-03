#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<char> st;
    string s;
    cin >> s; //String 0111   Stack 01
    for(int i = 0; i < s.size(); i++){
    if(st.size() == 0) st.push(s[i]);
    else if(st.top() == '1' && s[i] == '1') st.pop();
    else st.push(s[i]);
}
    string t;
    while(st.size() != 0){
        t += st.top();
        st.pop();
    }
    reverse(t.begin(), t.end());
    cout << t;
}