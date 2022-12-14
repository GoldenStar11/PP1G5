#include <bits/stdc++.h>

using namespace std;

bool comp(int i, int j){
    return (i % 2 == 0);
}

/*
1 2 3 4 5 6 7 8 9 10
10 8 6 4 2 1 3 5 7 9
1 3 5 7 9 10 8 6 4 2
*/
int main(){
    int a[] = {10, 3, 2, 5, 1, 6, 7, 9, 8, 4};
    vector <int> v(a, a+10);

    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), comp);
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(i % 2 == 0) cnt++;
    }
    sort(v.begin(), v.begin() + cnt);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}