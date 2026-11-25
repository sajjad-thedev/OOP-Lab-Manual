#include <iostream>
using namespace std;

class Shape {
public:
  virtual float area() { return 0; }
};
class Circle : public Shape {
  float radius;

public:
  Circle(float r) : radius(r) {}
  float area() override { return 3.14159f * radius * radius; }
};

int main() {
  Shape *s = new Circle(4);
  cout << s->area() << endl;
  return 0;
}
