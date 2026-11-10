#include <iostream>
using namespace std;

class Student {
public:
  string name;
  int rollNumber;
  float gpa;
  Student(string n, int r, float g) : name(n), rollNumber(r), gpa(g) {}
  bool isPassing() { return gpa >= 2.0; }
};

// I fixed this function's parameter, I made the student pass by reference
// so it can change the gpa permanently in the main memory
void doubleGpa(Student &s) { s.gpa = s.gpa * 2; }

int main() {
  Student s1("Bilal", 22, 1.5);
  doubleGpa(s1);
  cout << s1.gpa << endl; // prints 1.5, not 3 — why?
  return 0;
}
