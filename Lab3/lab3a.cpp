#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } /*0 1 2  - i
        4 7 6  - a[i]*/
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            cout << a[i] << ' ';
        }
    }
}