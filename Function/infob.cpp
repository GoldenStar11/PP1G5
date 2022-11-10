#include <bits/stdc++.h>

using namespace std;

double power(double a, int n){
    double s = 1;
    for(int i = 1; i <= n; i++){
        s = s * a;
    }
    return s;
}

int main(){
    double x;
    int k;
    cin >> x >> k;
    cout << power(x, k);
}