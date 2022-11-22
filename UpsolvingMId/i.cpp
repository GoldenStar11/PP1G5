#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int tmp[1000];

    for(int i=0;i<n;i++){
        int max=-12312313;
        for(int j=0;j<n;j++){
            if(max<a[i][j]){
                max=a[i][j];
                tmp[i]=max;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=tmp[i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}