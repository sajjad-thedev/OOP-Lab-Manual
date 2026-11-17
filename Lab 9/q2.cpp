#include <iostream>
using namespace std;

class Rectangle {
  float length;
  float width;

public:
  Rectangle() : length(1), width(1) {}
  Rectangle(float l, float w) : length(l), width(w) {}
  float area() const { return length * width; }
  void scale(float factor) {
    length *= factor;
    width *= factor;
  }
};

void scaleUpBroken(Rectangle &r, float factor) { r.scale(factor); }

int main() {
  Rectangle b(2, 3);
  scaleUpBroken(b, 2.0);
  cout << b.area() << endl; // still prints 6, not 24
}
