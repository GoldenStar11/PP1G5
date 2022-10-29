#include <iostream>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    } // 1 2 3 4 5 6 7 8 9 10 
    for(int i = 1; i < l; ++i){
        cout << a[i] << " ";
    } // 1 2 3 4 
    for(int i = r; i >= l; --i){
        cout << a[i] << " ";
    } // 7 6 5

    for(int i = r + 1; i <= n; ++i){
        cout << a[i] << " ";
    } // 8 9 10
}