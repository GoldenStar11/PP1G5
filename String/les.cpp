#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s; // Hello, World!
    //getline(cin, s);
    sort(s.begin(), s.end()); // sort(начальная точка, последняя точку)
    cout << s;
    /*s.front() - первый символ (cout)
      s.back() - последний символ (cout)
      s.begin() - 0(индекс первого символа)
      s.end() - s.size() - 1(индекс последнего символа)
    */
}