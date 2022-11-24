#include <bits/stdc++.h>

using namespace std;

/*int factorial(int n){
    int c = 1;
    for(int i = 1; i <= n; i++){
        c = c * i;
    }
    return c;
}*/
// 5
int factorialRec(int n){ //factorialRec(1)
    if(n == 1){ // 1 == 1 true
        return 1;
    }
    return n * factorialRec(n-1);// 5 * 4 * 3 * 2 * 1 = 120
    }

int main(){
    int n;
    cin >> n; // 5
    cout << factorialRec(n); //120
}