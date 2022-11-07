#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int min = 10, max = -1;
    while(n > 0){
        if(n % 10 > max) max = n % 10;
        if(min > n % 10) min = n % 10;
        n /= 10;
    }
    cout << max << ' ' << min;
}