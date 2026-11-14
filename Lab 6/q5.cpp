#include <iostream>
using namespace std;
class Student {
private:
  int id;
  string name;
  float gpa;
  static int totalStudents;

public:
  // constructors
  Student() : id(++Student::totalStudents), name("Unknown"), gpa(0) {}
  Student(string n, float g) : id(++Student::totalStudents), name(n), gpa(g) {}
  Student(const Student &source) {
    this->id = ++Student::totalStudents;
    this->name = source.name;
    this->gpa = source.gpa;
  }
  // Getters and Getters
  int getId() const { return id; }
  string getName() const { return name; }
  float getGpa() const { return gpa; }
  void setGpa(float gpa) {
    if (gpa >= 0 && gpa <= 4) {
      this->gpa = gpa;
    } else {
      cout << "Invalid GPA input" << endl;
    }
  }
  void printData() {
    cout << "==== Student Data ====" << endl;
    cout << "ID: " << getId() << endl;
    cout << "NAME: " << getName() << endl;
    cout << "GPA: " << getGpa() << endl;
    cout << "----------------------" << endl;
  }
};
int Student::totalStudents = 0;
int main() {
  Student s1("Ali", 3);
  Student s2;
  Student s3 = s1;
  s1.printData();
  s2.printData();
  s3.printData();
  return 0;
}
