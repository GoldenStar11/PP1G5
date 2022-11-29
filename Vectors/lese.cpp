#include <bits/stdc++.h>

using namespace std;

int main(){
  set<int> s;
  /*s.insert(8);
  s.insert(3);
  s.insert(4);
  s.insert(4);
  s.insert(8);
*/
  /*int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    s.insert(a);
  }*/

  set<int>::iterator it;  // it = i(position)   *it = s[i](element)
  
  for(it = s.end()-1; it >= s.begin(); it--)
    cout << *it << " ";

  return 0;
}