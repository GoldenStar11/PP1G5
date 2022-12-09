#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    cin>>s;
    stack <char> st;
    for(int i = 0; i < s.size(); i++){ //( ) ()
        if(st.empty()){     
            st.push(s[i]); 
        } // Stack
        else if(st.top() == '(' && s[i] == ')'){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    if(st.empty()) cout<<"YES";
    else cout << "NO";
}

/*
4
1 2 3 4

i = 1 j = 0
1^2 = 01 ^ 10 = 11 = 3 b = 1
i = 2 j = 0
3^1 = 11 ^ 01 = 10 = 2 b = 2 
i = 2 j = 1
3^2 = 11 ^ 10 = 01 = 1 b = 3
i = 3 j = 0
4^1 = 100 ^ 001 = 101 = 5
i = 3 j = 1
4^2 = 100 ^ 010 = 110 = 6
i = 3 j = 2
4^3 = 100 ^ 011 = 111 = 7
*/