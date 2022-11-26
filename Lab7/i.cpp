#include <bits/stdc++.h>

using namespace std;

int inf(int sum){
    int n;
    cin >> n;
    if(n == 0) return sum;
    sum += n;
    return inf(sum);
}
int main(){
    int sum = 0;
    cout << inf(sum);
}