#include <bits/stdc++.h>

using namespace std;

int a[10];

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        a[s[i] - 48]++; //112233 a[1]++ (2)  a[2]++ (2) a[3]++ (3)
        /* 0 1 2 3 4 5 6 7 8 9
           0 2 2 2 0 0 0 0 0 0
            i - сан a[i] - қанша рет қайталанған
         */
    }
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i = 0; i < 10; i++){
        if(a[i] != 0 && mini >= a[i]){
            mini = a[i];
        }
        if(a[i] != 0 && maxi <= a[i]){
            maxi = a[i];
        }
    }
    if(mini == maxi) cout << "Yes";
    else cout << "No";
}