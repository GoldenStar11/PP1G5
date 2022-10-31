#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }

    sort(a, a +n); // sorted array 
    int cnt = 0;
    for(int i = 0; i < n;i++){
        if(a[i] != a[i+1]){
            cnt++;
        }
    }

    // count уникальных элементов

    int no_dup[cnt][2];
    // массив no_dup[cnt][0] это уникальные элементы ,
    // no_dup[cnt][1] -счетчик  сколько их в ориг массиве 
    /*1 1 1 2 2 3 3 3 3
        1 3     1 0
        2 2     2 0
        3 4     3 0
    */
    int k = 0;

    for(int i = 0; i < n;i++){
        if(a[i] != a[i+1]){
            no_dup[k][0] = a[i];
            no_dup[k][1] = 0;
            // cnt++;
            k++;
        }
    }
    /* 1 1 1 2 2 3 3 3 3 
        1 3
        2 2
        3 4
    */
    for(int j = 0;j < n;j++){
        for(int i = 0; i < cnt;i++){
            if(no_dup[i][0] == a[j]){
                no_dup[i][1]++;
            }
        }
    }

    int max1 = INT_MIN;
    for(int i = 0; i < cnt;i++){
        if( max1 < no_dup[i][1]){
            max1 = no_dup[i][1]; // 4
        }

    }

    for(int i = cnt-1; i >= 0;i--){
        if( max1 == no_dup[i][1]){
            cout <<  no_dup[i][0] << " ";
        }

    }
    return 0;
}