#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a[4] = {1, 2, 3, 4};

  // int *p;
  // cout << *(a + 0) << endl; // a[0]
  // cout << *(a + 1) << endl; // a[1]

  for(int i = 0; i < 4; i++)
    cout << *(a + i) << " "; // a[i]
  return 0;
}