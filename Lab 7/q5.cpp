#include <iostream>
using namespace std;
class Student {
private:
  int id;
  string name;
  float gpa;
  static int nextId;

public:
  // constructors
  Student() : id(++nextId), name("Unknown"), gpa(0) {}
  Student(string n, float g) : id(++nextId), name(n), gpa(g) {}

  // Getters and Getters
  int getId() const { return id; }
  string getName() const { return name; }
  float getGpa() const { return gpa; }
  void printData() {
    cout << "==== Student Data ====" << endl;
    cout << "ID: " << getId() << endl;
    cout << "NAME: " << getName() << endl;
    cout << "GPA: " << getGpa() << endl;
    cout << "----------------------" << endl;
  }
};
int Student::nextId = 0;
int main() {
  Student s1("Ali", 3);
  Student s2("Ahmed", 3.5);
  Student s3("Arhan", 2.5);
  Student s4("Adil", 2.9);
  s1.printData();
  s2.printData();
  s3.printData();
  s4.printData();
  return 0;
}
