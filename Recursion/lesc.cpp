#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n){ // n = 4
    if (n == 0)
        return 0; // базовый случай (условие завершения)
    if (n == 1)
        return 1; // базовый случай (условие завершения)        
    return fibonacci(n-1) + fibonacci(n-2); // fib(3) + fib(2) = fib(2) + fib(1) + fib(1) + fib(0) = fib(1) + fib(0) + fib(1) + fib(1) + fib(0) = 1 + 0 + 1 + 1 + 0 = 3
}
// Выводим первые n чисел Фибоначчи   0 1 1 2 3 5 8 13 21 34 55  n = 11 
int main(){
    int n; 
    cin >> n; // 4
    cout << fibonacci(n-1);/* 0 1 2 3 4 
        0 1 1 2 3
    */
    return 0;
}