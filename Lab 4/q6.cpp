#include <iostream>
using namespace std;

class Student {
private:
  int id;
  string name;
  float gpa;

public:
  Student(int i, string n, float g) : id(i), name(n), gpa(g) {}
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
};

int main() {
  Student s1(1, "Ali", 3);
  s1.setGpa(3.5);
  cout << "Gpa: " << s1.getGpa() << endl;
  s1.setGpa(5);
  cout << "Gpa: " << s1.getGpa() << endl;
  return 0;
}
