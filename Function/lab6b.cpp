#include <iostream>

#include <cmath>

using namespace std;

void diff(int a[], int b[], int n){
    for(int i = 0; i < n; i++){
        a[i] = abs(a[i] - b[i]);
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
}
int main(){
    int n; 
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    diff(a,b,n);
    return 0;
    
}