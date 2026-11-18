#include <iostream>
using namespace std;

class Person {
protected:
  string name;
  int age;

public:
  Person(string n, int a) : name(n), age(a) {}
  string getName() const { return name; }
  int getAge() const { return age; }
};

class Student : public Person {
protected:
  int rollNumber;
  float gpa;

public:
  Student(string n, int a, int r, float g)
      : Person(n, a), rollNumber(r), gpa(g) {}
};

class GraduateStudent : public Student {
private:
  string thesisTitle;

public:
  GraduateStudent(string n, int a, int r, float g, string thesis)
      : Student(n, a, r, g), thesisTitle(thesis) {}
};
