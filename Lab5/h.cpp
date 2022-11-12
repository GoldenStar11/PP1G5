#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a[10];
    for(int i = 0; i < 10; i++){
        a[i] = 0;
    }
    for(int i = 0; i < s.size(); i++){
        a[s[i]/*1 = 49 2 = 50*/ - 48]++; //112233 a[1]++ (2)  a[2]++ (2) a[3]++ (3)
        /* 0 1 2 3 4 5 6 7 8 9
           0 2 2 2 0 0 0 0 0 0
        */
    }
    int min = INT_MAX, max = INT_MIN;
    for(int i = 0; i < 10; i++){
        if(min != 0 && min > a[i]){
            min = a[i];
        }
        if(max != 0 && max < a[i]){
            max = a[i];
        }
    }
    if(min = max) cout << "Yes";
    else cout << "No";
}