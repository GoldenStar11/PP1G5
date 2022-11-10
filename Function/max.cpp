#include <bits/stdc++.h>

using namespace std;
//(void - не передает значение, int,string,char,bool,double,long - передать значение)
/*void max(int a, int b){
    if(a >= b) cout << a;
    else cout << b;
}*/

int max(int a, int b){
    if(a >= b) return a;
    else return b;
}

int min(int a, int b, int c){

}


int main(){
    int a,b,m,n;
    cin >> a >> b >> m >> n; // 10 20
    cout << max(a,b) + max(m,n);
    /*if(a >= b)  c = a;
    else c = b;
    if(m >= n) d = m;
    else d = n;
    cout << c + d;
    */
}