#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum1 = 0, sum2 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            sum1 += a[i];
            cnt1++;
        }
        else{
            sum2 += a[i];
            cnt2++;
        }
    }
    cout << "Left hand magic power: " << sum1 * cnt1 << endl;
    cout << "Right hand magic power: " << sum2 * cnt2 << endl;
}