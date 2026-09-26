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

int main() {
  Student s1("Hassan", 30, 2.8);
  Student s2("Mahnoor", 31, 3.95);
  if (s1.gpa > s2.gpa) {
    cout << s1.name << " Has higher GPA." << endl;
  } else if (s2.gpa > s1.gpa) {
    cout << s2.name << " Has higher GPA." << endl;
  } else {
    cout << "Both have equal GPAs." << endl;
  }
  return 0;
}
