#include <iostream>
using namespace std;

class Circle {
private:
  float radius;

public:
  Circle() : radius(1.0) {}
  Circle(float r) : radius(r) {}
  float area() const { return 3.14159 * radius * radius; }
  void setRadius(float r) { radius = r; }

  Circle scaled(float factor) const {
    Circle scaledCircle(radius * factor);
    return scaledCircle;
  }
};

int main() {
  Circle circle(2.0);
  Circle newCircle = circle.scaled(3.0);

  cout << "New Circle's Area: " << newCircle.area() << endl;

  return 0;
}
