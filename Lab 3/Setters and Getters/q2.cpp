#include <iostream>
using namespace std;

class Circle {
  float radius;

public:
  float getRadius() const { return radius; }
  void setRadius(float r) {
    if (r > 0) {
      this->radius = r;
      cout << "accepted" << endl;
    } else {
      cout << "rejected" << endl;
    }
  }
};

int main(void) {
  Circle circle;
  circle.setRadius(-3);
  circle.setRadius(5);
  cout << "Result : " << circle.getRadius() << endl;
  return 0;
}
