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
  int n, a;
  cin >> n;
  set<int> v;
  for(int i = 0; i < n; i++){
    cin >> a;
    v.insert(a);
  } // it = i(position)   *it = v[i](element on this position)
  for(set<int>::iterator it = v.begin(); it != v.end(); it++)
    cout << *it << ' ';
  return 0;
}