#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a[4];
  int *p;
  p = a;    // it = v.begin()
  *p = 1;  // a[0] = 1
  //p = p + 1;
  *(p+1) = 2; // a[1] = 2

  //p = p + 1;
  *(p+2) = 10; // a[2] = 10

  //p = p + 1;
  *(p+3) = 3; // a[3] = 3

  for(int *ptr = a; ptr != (a + 4); ptr++) //end of array = a+4
    cout << *ptr << " "; // a[i] === *(a + i)

  return 0;
}