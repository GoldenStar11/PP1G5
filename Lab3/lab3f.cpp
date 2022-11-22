#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }/*0 1  2  3  4  5
       5 15 37 45 78 101

       5   4  3  2  1  0
       101 78 45 37 15 5 
    */
    for(int i = n-1; i >= 0; i--){
        cout << a[i] << ' ';
    } 
}