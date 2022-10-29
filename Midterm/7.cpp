#include <iostream>

using namespace std;

int main(){
    int n, cnt = 0, max = -1;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
     //1 1 1 2 3 4 5 6 7 8 9
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i] == a[j]){
                cnt++;
            }
        }
        if(max < cnt - 1){
             max = cnt;
        }
        cnt = -1;
    }
    cout << max;
}