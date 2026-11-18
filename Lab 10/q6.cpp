#include <iostream>
using namespace std;

class Person {
protected:
  string name;
  string fatherName;

public:
  Person(string n, string f) : name(n), fatherName(f) {}
  void introduce() const {
    cout << "Name: " << name << endl;
    cout << "Father Name: " << fatherName << endl;
  }
};
class Student : public Person {
private:
  int id;
  float gpa;
  static int nextId;

public:
  Student(string n, string f, float g) : Person(n, f), id(++nextId), gpa(g) {}
  int getId() const { return id; }
  string getName() const { return name; }
  float getGpa() const { return gpa; }
  string passOrFail() { return (gpa >= 2) ? "Pass" : "Fail"; }
};
int Student::nextId = 0;
int main() {
  Student s1("Zayn", "Malik", 4.0);
  s1.introduce();
  cout << "Pass/Fail: " << s1.passOrFail() << endl;
  return 0;
}
