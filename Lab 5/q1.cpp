#include <iostream>
using namespace std;

class Temperature {
  float celsius;

public:
  Temperature() { celsius = 20.0; }

  void setCelsius(float c) {
    if (c >= -50 && c <= 60) {
      celsius = c;
    }
  }

  float setCelsius() const { return celsius; }
};

int main(void) {
  Temperature t;
  t.setCelsius(-500);
  cout << "Temperature : " << t.setCelsius() << endl;
  return 0;
}
