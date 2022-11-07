#include <bits/stdc++.h>

using namespace std;

int main(){
    /*
    int a, b;
    cin >> a >> b;
    if(a == b) cout << "Equal";
    else if(a > b) cout << "a bolshe b";
    else cout << "b bolshe a";
    */
    int n;
    cin >> n;
    /*
    if(n == 3) sum = 1 + 2 + 3;
    if(n == 4) sum = 1 + 2 + 3 + 4;
    if(n == 5) sum = 1 + 2 + 3 + 4 + 5;
    
    int sum = 0; //n = 5 1 2 3 4 5
    for(int i = 1; i <= n; i++){
        sum += i; // sum += 5
    }
    cout << sum;*/
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; //a[0], a[1], a[2], a[3]
    }//0 1 2  3 
    // 1 7 77 12
    cout << a[2] << endl; // Это мне выводит 3 элемент
    for(int i = 0; i < n; i++){ // i < 4
        cout << a[i] << ' '; //a[0], a[1], a[2], a[3]
    }
}