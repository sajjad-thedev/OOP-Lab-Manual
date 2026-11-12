#include <iostream>
using namespace std;

class Student {
  string name;
  int rollNumber;
  float gpa;
  float attendancePercent;

public:
  Student(string n, int r, float g, float a)
      : name(n), rollNumber(r), gpa(g), attendancePercent(a) {}
  bool isPassing() { return gpa >= 2.0; }
  bool isEligibleForExam() { return isPassing() && attendancePercent >= 75; }
};

int main() {
  Student s1("Ayesha", 21, 3.6, 78);
  Student s2("Ali", 22, 3, 70);

  cout << "Student 1: ";
  s1.isEligibleForExam() ? cout << "Eligible\n" : cout << "Not Eligible\n";
  cout << "Student 2: ";
  s2.isEligibleForExam() ? cout << "Eligible\n" : cout << "Not Eligible\n";

  return 0;
}
