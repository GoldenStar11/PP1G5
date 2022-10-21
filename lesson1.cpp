#include <bits/stdc++.h>
#define PI 3.14159265  
using namespace std;

int main(){
    /*
    int n = 123;
    short s = 234;
    char c = '$';
    double d = 2.69;
    int a, b;
    cin >> a >> b;
    cout << a << ' ' << b << ' ' << s << endl;
    cout << "Hello, 404!"; 
    */
   string s = "Hello, World! 23253242!%:;*№(%";
   int a, b;
   cin >> a >> b;
   //cout << a + b << ' ' << a * b << ' ' << a - b << ' ' << a / b << ' ' << a % b;
    //&& - and(и)  || - or(или) ^^ - xor(обратное или)
    cout << pow(a, b) << ' ' << sqrt(25) << ' ' << abs(-50) << ' ' << abs(50) << ' ' << sin(90 * PI / 180) << ' ' << max(2, 5) << ' ' <<  min(2, 5); 
    // pow(5, 3) = 5 * 5 * 5 = 125
    // sqrt(25) = 5
    // abs(-50) = abs(50) = |50|
    // sin(90 * PI / 180) = 1 
    // max(2, 5) = 5
    // min(2, 5) = 2 
    if(a > b){
        cout << a;
    }
    else{
        cout << b;
    }
    
    if(a > b){
        cout << "a greater than b";
    }
    else if(a == b){
        cout << "a equal to b";
    }
    else{
        cout << "b greater thab a";
    }
}