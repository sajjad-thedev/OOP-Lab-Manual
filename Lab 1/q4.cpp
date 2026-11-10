#include <iostream>
#include <string>

using namespace std;

struct Student {
  string name;
  int rollNumber; // First bug was no semicolon on end of this line
  float gpa;
}; // Second bug was there was no semicolon at the end of struct

int main() {
  Student s1;
  s1.name = "Ali";
  cout << s1.name;
  // Last bug is there is no return from main
  return 0;
}
