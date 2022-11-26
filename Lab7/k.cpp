#include <bits/stdc++.h>

using namespace std;

int maxi = 0;

int maxim(string s){
    if(s.size() == 0){
        return maxi;
    }
    if(s[0] - 48 > maxi) maxi = s[0] - 48;
    s.erase(0,1);
    return maxim(s);
}

int main(){
    string s;
    cin >> s;
    cout << maxim(s);
}