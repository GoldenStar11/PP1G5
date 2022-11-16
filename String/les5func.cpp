#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,t;
    cin >> s >> t; 
    s.insert(5, t);  // HelloBig, World!   Big
    s.append("Hello!" + t); // s += "Hello!"
    cout << s;
    //cout << s.erase(2, 5);
    /*int a = stoi(s); // 525
    cout << a + 5;*/
    /*char c;
    cout << s.find('e');*/
    //getline(cin, s);
    //cout << s.substr(2, s.size() - 1); // substr(начальная, количество символов)
    /*for(int i = 0; i < s.size(); i++){
        if(s.substr(i,t.size()) == t){
            cout << "Yes";
            exit(0);
        }
    }
    cout << "No";
    */
}