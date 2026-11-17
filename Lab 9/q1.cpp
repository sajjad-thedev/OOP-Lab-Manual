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
};

int main() {
  Circle circles[4];
  circles[0].setRadius(2.0);
  circles[1].setRadius(3.0);
  circles[2].setRadius(1.5);

  double totalArea = 0;

  for (Circle circle : circles) {
    totalArea += circle.area();
  }

  cout << "Total Area: " << totalArea << endl;

  return 0;
}
