#include <iostream>

using namespace std;

int main(){
    int x, sum = 0;
    cin >> x;
    while(x > 9){
        sum += x % 10; // 1234 % 10 = 4 sum + 4 = 4 2)sum = 4 + 123 % 10 = 4 + 3 = 7
        // 3) sum = 7 + 12 % 10 = 7 + 2 = 9
         x = x / 10; //1234 / 10 = 123 / 10 = 12 / 10 = 1
    } //x = 1
    if(sum % 10 == x){ // 9 % 10 == 1 => 9 == 1 false
        cout << "YES";
    } 
    else cout << "NO";
}