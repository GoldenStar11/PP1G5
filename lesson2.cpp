#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //int a;
    //cin >> a;
    /*for(int i = 1; i <= a; i++){
        if(i % 2 == 0) cout << i << ' ';
    }*/
    int i = 1;
    /*while(i <= a){
        if(i % 2 == 0) cout << i << ' ';
        i++;
    }*/
    /*do{
        if(i % 2 == 0) cout << i << ' ';
        i++;
    } while(i <= a); */
    /*for(int i = 0; i < a; i++){
        if(i < 10){ 
            continue;
        }
        if(i > 20){
            break;
        }
        if(i % 2 == 0) cout << i << ' ';
    }*/
    cout << round(2.6) << ' ' << ceil(2.1) << ' ' << floor(2.7);

    int a, b;
    cin >> a >> b;
    /*if(a > b && a > 0) cout << a;
    if(a > b || a > 0) cout << "a may be positive";
    if(a == b) cout << "a equal b";
    if(a != b) cout << "a not equal b";
    */
    bool t = true;
    if(!t) cout << "False";
    else cout << "True";

    // nested if
    if(a > b){
        if(a > 0) cout << "a more than b and positive";
        else cout << "a more than b and negative";
    }
    else if(a < b){
        if(b > 0) cout << "b more than a and positive";
        else cout << "b more than a and negative";
    }
    else cout << "a equal to b";
    5 10
}