#include <bits/stdc++.h>

using namespace std;

int summa = 0;

int sum(string s, int j){
    if(j >= s.size()){
        return summa;
    }
    summa += s[j] - 48;
    return sum(s,j+1);
}

int main(){
    string s;
    cin >> s;
    cout << sum(s,0);
}