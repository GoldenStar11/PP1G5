#include <bits/stdc++.h>

using namespace std;

void f(int n, int a[], int arr[][]){
    for(int i = 0 ; i < 1; i++) {
        for(int j =0; j < n; j++){
            a[i] = arr[i][j] - arr[i+1][j];
            if(a[i] < 0) 
            {
                a[i] =- (a[i]);
                cout <<  a[i] << " ";
            }
            else
            {
             cout << a[i] << " ";
            }
        }
    }
}
int main () {
    int n;
    cin >> n;
    int a[n];
    int arr[n][n];
    for(int i = 0 ; i < 2; i++) {
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    f(n, a, *arr);
}