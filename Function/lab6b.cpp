#include <iostream>

#include <cmath>

using namespace std;

void diff(int a[], int b[], int n){
    int d[n];
    for(int i = 0; i < n; i++){
        d[i] = abs(a[i] - b[i]);
    }
    for(int i = 0; i < n; i++){
        cout << d[i] << ' ';
    }
}
int main(){
    int c; 
    cin >> c;
    int a[c], b[c];
    for(int i = 0; i < c; i++) cin >> a[i];
    for(int i = 0; i < c; i++) cin >> b[i];
    diff(a,b,c);
    return 0;
}