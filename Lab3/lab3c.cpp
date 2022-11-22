#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << max;
    /*  max = -2^32
        5 11 37 9 21 33
        max < a[i]
        1) max < a[0] => max = 5
        2) max < a[1] => max = 11
        3) max < a[2] => max = 37
        4) max < a[3] => false
        5) max < a[4] => false
        6) max < a[5] => false
    */
}  