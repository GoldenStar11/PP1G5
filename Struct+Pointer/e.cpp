#include <iostream>
#include <algorithm>

using namespace std;

struct Student{
  string name; // fields // Student 1
  int age; // 18
  double gpa; // 3.9 
};

int main(){
  Student s;
  s.name = "Student 1";
  s.age = 18;
  s.gpa = 3.9;

  //cin >> s.name >> s.age >> s.gpa;  

  cout << s.name << " " << s.age << " " << s.gpa << endl;
  
  return 0;
}