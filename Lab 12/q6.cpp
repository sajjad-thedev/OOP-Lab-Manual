#include <iostream>
using namespace std;

class Person {
protected:
  string name;
  int age;

public:
  Person(string n, int a) : name(n), age(a) {}
  virtual void introduce() {
    cout << "My name is " << name << ", I am " << age << " years old." << endl;
  }
};

class Employee : public Person {
protected:
  int employeeId;
  int salary;

public:
  Employee(string n, int a, int emp, int sal)
      : Person(n, a), employeeId(emp), salary(sal) {}
  void introduce() override {
    cout << "My name is " << name << ", Employee ID " << employeeId
         << " and salary " << salary << "." << endl;
  }
};

class Teacher : public Employee {
protected:
  string subject;
  string department;

public:
  Teacher(string n, int a, int e, int s, string sub, string dep)
      : Employee(n, a, e, s), subject(sub), department(dep) {}
  void introduce() override {
    cout << "My name is " << name << " and I teach " << subject << " at "
         << department << " department." << endl;
  }
};

int main() {
  Person *staff[2] = {new Employee("Ali", 21, 1, 20000),
                      new Teacher("Ahmed", 19, 2, 180000, "Calculus", "Math")};
  for (int i = 0; i < 2; i++) staff[i]->introduce();
  for (int i = 0; i < 2; i++) delete staff[i];
  return 0;
}
