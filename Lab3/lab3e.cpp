#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i]; // sum = a[0] + a[1] + a[2] + ... + a[n-1]
    }
    cout << sum;
    /*  1 2 3 4 5
        sum += 1 == sum = sum + 1 = 1
        sum += 2 == 1 + 2 = 3 
        sum += 3 == 3 + 3 = 6
        sum += 4 == 6 + 4 = 10
        sum += 5 == 10 + 5 = 15
    */
}  