#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int pos = 0,cnt = 0;
    bool flag = false;
    getline(cin,s);
    for(int i = 0; i < s.size();i++){
        if(s[i] == ' '){
            pos = i + 1;
            if(flag == true){
                flag = false;
            }
            else{
                cout << s.substr(pos,cnt) << endl;
            }
        }
        if(s[i] >= '0' && s[i] <= '9'){
            flag = true;
        }
        else{
            cnt++;
        } 
        cnt = 0;
    } 
}