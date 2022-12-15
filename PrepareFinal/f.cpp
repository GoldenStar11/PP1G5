#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool flag = false;
    if(s.find('@') < s.find('.')) flag = true;
    int cnta = 0, cntd = 0;
    for(int i = 0; i < s.size(); i++){
        if('@' == s[i]) cnta++;
        else if('.' == s[i]) cntd++;
    }
    if(cnta > 1 || cntd > 1 || !flag){
        cout << "No";
        return 0;
    }
    bool b = false;
    for(int i = 0; i < s.find('@'); i++){
        if(s[i] >= 'a') b = true;
    }
    if(b){
        bool c = false;
        for(int i = s.find('@') + 1; i < s.find('.'); i++){
            if(s[i] >= 'a') c = true;
        }
        if(c){
            bool d = false;
            for(int i = s.find('.') + 1; i < s.size(); i++){
                if(s[i] >= 'a') d = true;
            }   
            if(d) cout << "Yes";
            else cout << "No";
        }
        else cout << "No";
    }
    else cout << "No";
}