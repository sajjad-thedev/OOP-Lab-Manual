#include <iostream>
using namespace std;

float const PI = 3.14159;

class Circle {
  float radius;

public:
  Circle(float r) : radius(r) {}
  float area() { return (PI * (radius * radius)); }
};

int main() {
  Circle circle(5);
  cout << "Area : " << circle.area() << endl;
  return 0;
}
