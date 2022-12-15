#include <bits/stdc++.h>

using namespace std;

int main(){
    int s;
    cin >> s;
    string d = "0123456789";
    for(int i = 1; i < d.size(); i++){  
        for(int j = 0; j < d.size(); j++){
            for(int k = 0; k < d.size(); k++){
                if(d[i] + d[j] + d[k] - 48 * 3 == s){  //"102" = 49 + 48 + 50 - 48 * 3 = 1 + 0 + 2 = 3 
                    cout << d[i] << d[j] << d[k] << endl;
                }
            }
        }
    }
}
/*
1 0 (0123456789)
1 1 (0123456789)
1 2 (0123456789)
...
2 0 (0123456789)
2 1 (0123456789)
...
3 0 (0123456789)
*/