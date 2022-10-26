#include <iostream>

using namespace std;

void gcd(int a, int b){
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    cout << a;
}

int main(){
    int x,y;
    cin >> x >> y;
    gcd(x,y);    
}