#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
/*  n = 5
    i = 1 
    sum += 1 == 1

    2 <= 5
    i = 2
    sum += 2 == 3

    3 <= 5
    i = 3
    sum += 3 == 6

    i = 4
    4 <= 5
    sum += 4 == 10

    i = 5
    5 <= 5
    sum += 5 == 15

    i = 6
    6 <= 5 loop ends
*/
    cout << sum << endl; // 15
    
    int j = 0;
    while(n > 0){
        n -= 2; // n = n - 2
        j++;
    }  
/* 11 -= 2 == 9
    j++ = 1

    9 > 0
    9 -= 2 == 7
    j++ = 2

    7 > 0
    7 -= 2 == 5
    j++ = 3

    5 > 0
    5 -= 2 == 3
    j++ = 4

    3 > 0
    3 -= 2 == 1
    j++ = 5

    1 > 0
    1 -= 2 == -1
    j++ = 6

    -1 > 0 loop ends
*/
    cout << j;
    sum = 0;
    int f = 1;
    // n = -1
    do
    {
       sum += f; // sum += 1 == 1
       f++; // f++ = 2
    } while (f < n); // 2 < -1 (nope) loop ends
    // sum = 1
    while(f < n){ // 1 < -1 (nope) loop ends
        sum += f;
        f++;
    }
    //sum = 0
    
    
}