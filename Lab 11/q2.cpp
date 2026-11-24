#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
  string name;
  int age;

public:
  Person(string n, int a) : name(n), age(a) {}
};
class Student : public Person {
protected:
  int rollNumber;
  float gpa;

public:
  Student(string n, int a, int r, float g)
      : Person(n, a), rollNumber(r), gpa(g) {}
  int getId() const { return rollNumber; } // added this week
};
class Employee {
protected:
  int employeeId;
  float salary;

public:
  Employee(int id, float sal) : employeeId(id), salary(sal) {}
  int getId() const { return employeeId; } // name clash with Student!
  float getSalary() const { return salary; }
};
class TeachingAssistant : public Student, public Employee {
  int hoursPerWeek;

public:
  TeachingAssistant(string n, int a, int r, float g, int empId, float sal,
                    int hours)
      : Student(n, a, r, g), Employee(empId, sal), hoursPerWeek(hours) {}
};

void printSummary(TeachingAssistant &ta) {
  cout << "Student Id: " << ta.Student::getId() << endl;
  cout << "Employee Id: " << ta.Employee::getId() << endl;
  cout << "Salary: " << ta.Employee::getSalary() << endl;
}

int main() {
  TeachingAssistant ta("Bilal", 24, 5, 3.7, 501, 45000, 10);
  printSummary(ta);
  return 0;
}
