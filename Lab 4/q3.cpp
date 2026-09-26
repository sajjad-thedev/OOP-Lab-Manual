#include <iostream>
using namespace std;

class Student {
  float gpa;

public:
  Student(float gpa) { this->gpa = gpa; }

  float getBalance() const { return gpa; }

  void setBalance(float gpa) {
    if (gpa >= 0.0 && gpa <= 4.0) {
      this->gpa = gpa;
    }
  }

  bool isPassing();
};

bool Student::isPassing() { return gpa >= 2.0; }

int main(void) {
  Student s1(3.0);
  Student s2(1.5);
  s1.isPassing() ? cout << "Pass" << endl : cout << "Fail" << endl;
  s2.isPassing() ? cout << "Pass" << endl : cout << "Fail" << endl;
  return 0;
}
