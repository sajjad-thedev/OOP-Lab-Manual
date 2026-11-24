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

class Employee {
protected:
  int employeeId;
  int salary;

public:
  Employee(int emp, int sal) : employeeId(emp), salary(sal) {}
  int getId() const { return employeeId; }
  int getSalary() const { return salary; }
};

class Teacher : public Person, public Employee {
protected:
  string subject;
  string department;

public:
  Teacher(string n, int a, int e, int s, string sub, string dep)
      : Person(n, a), Employee(e, s), subject(sub), department(dep) {}
  void printDetails() {
    cout << "Employee Id: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Salary: " << getSalary() << endl;
    cout << "Subject: " << subject << endl;
    cout << "department: " << department << endl;
  }
};

int main() {
  Teacher t1("Hammad Nasir", 24, 1, 80000, "Math", "Math");
  t1.printDetails();
  return 0;
}
