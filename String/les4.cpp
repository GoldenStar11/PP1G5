#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, s2;
    cin >> s >> s2;
    string s3 = s + ' ' + s2;
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < max(s.size(), s2.size()); i++){
        sum1 += s[i];
        sum2 += s2[i];
    }
    if(sum1 >= sum2){
        cout << "sum1 more or equal";
    }
    else{
        cout << "sum2 more";
    }
    cout << "\n" << s3;
}