#include <bits/stdc++.h>

using namespace std;

bool IsEven(int i){
    return (i%2==0);
}
int main(){
    vector <int> v;
    for(int i = 1; i <= 9; i++){
        v.push_back(i);
    }//  1 2 3 4 5 6 7 8 9 
    int cnt = count_if(v.begin(), v.end(), IsEven);
    cout << cnt << endl;
}