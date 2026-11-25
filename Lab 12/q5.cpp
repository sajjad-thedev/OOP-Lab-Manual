#include <iostream>
using namespace std;

class Employee {
protected:
  string name;
  float salary;

public:
  Employee(string n, float s) : name(n), salary(s) {}
  virtual void raiseSalary(float pct) {
    salary += salary * (pct / 100);
    cout << name << " has a " << pct << "% salary raise." << endl;
  }
};

class Manager : public Employee {
public:
  Manager(string n, float s) : Employee(n, s) {}
  void raiseSalary(float pct) override {
    salary += salary * (pct / 100);
    cout << name << " (Manager) has a " << pct << "% salary raise." << endl;
  }
};
class Developer : public Employee {
public:
  Developer(string n, float s) : Employee(n, s) {}
  void raiseSalary(float pct) override {
    salary += salary * (pct / 100);
    cout << name << " (Developer) has a " << pct << "% salary raise." << endl;
  }
};

int main() {
  Employee *employees[3] = {new Developer("Sajjad", 500000),
                            new Manager("Ahmed", 350000)};
  for (int i = 0; i < 2; i++)
    employees[i]->raiseSalary(8);
  for (int i = 0; i < 2; i++)
    delete employees[i];
  return 0;
}
