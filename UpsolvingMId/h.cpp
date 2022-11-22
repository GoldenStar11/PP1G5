#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int max=-123123;
    int max_pos;

    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            max_pos=i;
        }
    }

    int max2=-123123;

    for(int i=0;i<n;i++){
        if(max_pos!=i && max2<a[i]){
            max2=a[i];
        }
    }
    cout << max*max2;
}