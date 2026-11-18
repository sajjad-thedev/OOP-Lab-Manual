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

class Doctor : public Person {
  string specialization;
  int yearsOfExperience;

public:
  Doctor(string n, int a, string s, int e)
      : Person(n, a), specialization(s), yearsOfExperience(e) {}
  void printInfo() const {
    cout << "====== Doctor's Info =========" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Specialization: " << specialization << endl;
    cout << "Years Of Experience: " << yearsOfExperience << endl;
  }
};

int main() {
  Doctor d1("Sajjad Ahmed", 19, "Nutrigenic Specialist", 2);
  d1.printInfo();
  return 0;
}
