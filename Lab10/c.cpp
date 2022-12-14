#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
bool isSquare(char top, char c){
  if(top == '0') return false;
  int k = (top-48)*10 + (c-48);// k = 1 * 10 + 6 = 16 k = 40 + 9 = 49
  if(sqrt(k) == int(sqrt(k))){ //4 = 4
    return true;
  }else{
    return false;
  }
} //16 1 49 6
int main(){
  string s;
  cin>>s;
  stack<char> st; // Stack  
  for(int i = 0;i<s.size();i++){
    if(!st.empty()){
      if(isSquare(st.top(),s[i])){ //isSquare(1,6)
        st.pop();
      }else{
        st.push(s[i]);
      }
    }else{
      st.push(s[i]);
    }
  }
  if(st.empty()){
    cout<<"Stack is empty"<<endl;
    return 0;
  }
  while(!st.empty()){
    cout<<st.top();
    st.pop();
  }

  return 0;
}
/*
3
bella   ans = "abel"
label   ans = "abel"
roller  ans = "el"
*/
/*
#include<iostream>
#include<stack>

using namespace std;

int main(){
    string s;
    cin >> s;
    stack <char>st; //16 1496  Stack 
    for(int i = 0;i < s.size();i++){
        if(st.empty()){
            st.push(s[i]);
        }else if(st.top() == '1' && s[i] == '6'){
            st.pop();
        }else if(st.top() == '2' && s[i] == '5'){
            st.pop();
        }else if(st.top() == '3' && s[i] == '6'){
            st.pop();
        }else if(st.top() == '4' && s[i] == '9'){
            st.pop();
        }else if(st.top() == '6' && s[i] == '4'){
            st.pop();
        }else if(st.top() == '8' && s[i] == '1'){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    if(st.empty()) cout << "Stack is empty" ; return 0;

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}*/