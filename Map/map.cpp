#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   int cnt = 0;
   cin >> n >> k;
   map <int, int> mp;  
   /*
   1 - 3 
   2 - 1 
   3 - 1
   4 - 2
   1 2 3 4 4 1 1
   */ 
   for (int i=0; i<n; i++) {
        int x;
        cin >>x;
        mp[x]++;
    }
   map<int, int> :: iterator it;
   for(it = mp.begin(); it != mp.end(); it++){
      if(it -> first == k){
       cnt = it -> second;
      }
      cout << it ->first << ' ' << it->second << endl;
   }
   cout << cnt;
   return 0;
}