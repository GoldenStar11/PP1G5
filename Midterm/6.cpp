#include <iostream>

using namespace std;

int main(){
    int x, max = 0, min = 9, a;
    cin >> x;
    while(x > 0){
        a = x % 10;
        if(a > max){
            max = a;
        }
        if(a < min){
            min = a;
        }
        x = x / 10;
    }
    cout << max << ' ' << min;
}