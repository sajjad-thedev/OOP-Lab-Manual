#include <iostream>
using namespace std;

class Student { // Fix 1: added curly brace here
public:
  string name; // Fix 2: added semicolon here
  Student(string n) : name(n) {}
  void greet() { cout << "Hi, " << name; }
}; // fix 3: added semicolon here
