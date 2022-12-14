#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n); // 1 1 2 3 3    1 1 3 2 3        1 3 2 3 1
    
    do { 
        vector <int> x, y;
        for (int i = 0; i < n; i++) x.push_back(a[i]);
        y = x;
        reverse(x.begin(), x.end());
        if (x == y){
            for(int i = 0; i < x.size(); i++) cout << x[i] << " ";
            return 0;
        }
    } 
    while (next_permutation(a, a + n));
    cout << "Impossible";
}