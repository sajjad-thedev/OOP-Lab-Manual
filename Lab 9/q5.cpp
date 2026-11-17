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
  void printData() const {
    cout << "==== Student Data ====" << endl;
    cout << "ID: " << getId() << endl;
    cout << "NAME: " << getName() << endl;
    cout << "GPA: " << getGpa() << endl;
    cout << "----------------------" << endl;
  }
};

int Student::nextId = 0;

class Roster {
  Student students[10];
  int count;

public:
  Roster() : count(0) {}
  void add(const Student &student) {
    if (count < 10)
      students[count++] = student;
  }
  void printAll() const {
    for (int i = 0; i < count; i++)
      students[i].printData();
  }
  float totalGpa() const {
    float total = 0;
    for (int i = 0; i < count; i++)
      total += students[i].getGpa();
    return total;
  }
};

int main() {
  Student s1("Ali", 3);
  Student s2("Ahmed", 3.5);
  Student s3("Arhan", 2.5);
  Roster roster;
  roster.add(s1);
  roster.add(s2);
  roster.add(s3);
  roster.printAll();
  cout << "Total GPA: " << roster.totalGpa() << endl;
  return 0;
}
