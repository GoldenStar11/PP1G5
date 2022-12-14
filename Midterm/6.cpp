#include <iostream>

using namespace std;

int main(){
    int x, max = 0, min = 9, a;
    cin >> x;
    while(x > 0){
        a = x % 10; // 4 27 % 10 = 7 2 % 10 = 2
        if(a > max){
            max = a; // max = 4 => 7
        }
        if(a < min){
            min = a; // min = 4 => 2
        }
        x = x / 10; // 274 / 10 = 27 / 10 = 2 / 10 = 0
    }
    cout << max << ' ' << min;
}