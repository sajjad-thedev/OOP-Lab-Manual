#include <iostream>
using namespace std;

class Circle {
private:
  float radius;

public:
  // Default constructor
  Circle() : radius(1.0) {}
  Circle(float r) : radius(r) {}
  float area() const { return 3.14159 * radius * radius; }
};

int main(void) {
  Circle c1;
  cout << "Area of circle 1 : " << c1.area() << endl;

  Circle c2(3.0);
  cout << "Area of circle 2 : " << c2.area() << endl;
  return 0;
}
