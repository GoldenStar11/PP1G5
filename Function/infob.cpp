#include <bits/stdc++.h>

using namespace std;

double power(double a, int n){
    double s = 1;
    for(int i = 1; i <= n; i++){
        s = s * a;
    }
    return s;
}

int min(a[], b[][], n){

}

int main(){
    int n;
    cin >> n;
    int a[n], b[n][n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }
    min(a, b, n);
}