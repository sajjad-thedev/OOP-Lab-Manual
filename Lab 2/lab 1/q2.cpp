#include <iostream>
using namespace std;

float const PIE = 3.14;

class Circle {
  float radius;

public:
  Circle(float r) : radius(r) {}

  float calculateArea() { return PIE * (radius * radius); }
};

int main(void) {
  Circle circle(4);
  cout << "Circle Area : " << circle.calculateArea() << endl;
  return 0;
}
