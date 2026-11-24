#include <iostream>
using namespace std;

class Flying {
public:
  void move() { cout << "Flying" << endl; }
};
class Swimming {
public:
  void move() { cout << "Swimming" << endl; }
};
class Duck : public Flying, public Swimming {};

int main() {
  Duck d;
  d.Flying::move();
  return 0;
}
