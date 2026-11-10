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

void updateGpa(Student &s, float newGpa) { s.gpa = newGpa; }

int main() {
  Student a("Zara", 10, 3.0);
  Student &b = a;
  cout << "Initial GPA : " << b.gpa << endl;
  updateGpa(b, 1.5);
  cout << "Updated GPA : " << b.gpa << endl;
  return 0;
}
