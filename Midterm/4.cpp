#include <iostream>

using namespace std;

int main(){
    int x, sum = 0;
    cin >> x;
    while(x > 9){
        sum += x % 10;
        x = x / 10;
    }
    if(sum % 10 == x){
        cout << "YES";
    } 
    else cout << "NO";
}