#include <iostream>
using namespace std;

class Student {
  int id;
  string name;
  float gpa;

public:
  Student(int i, string n, float gpa) : id(i), name(n), gpa(gpa) {}
  int getId() { return id; }
  string getName() { return name; }
  float getGpa() { return gpa; }
};

int main() {
  Student s1(1, "Ali", 2.8);
  cout << "Student Id: " << s1.getId() << endl;
  cout << "Student Name: " << s1.getName() << endl;
  cout << "Student Gpa: " << s1.getGpa() << endl;
  return 0;
}
