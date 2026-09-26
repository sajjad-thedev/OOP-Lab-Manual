#include <iostream>
using namespace std;

class Rectangle {
private:
  float width;
  float height;

public:
  Rectangle(float w, float h) {
    width = w;
    height = h;
  }

  float area() { return width * height; }
};

int main(void) {
  Rectangle r(5, 4);
  cout << "Area : " << r.area() << endl;
  return 0;
}
