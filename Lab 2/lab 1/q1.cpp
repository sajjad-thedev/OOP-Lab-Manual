#include <iostream>
using namespace std;

float const PIE = 3.14;

float calculatecircleArea(float r) { return PIE * (r * r); }

int main(void) {
  float radius = 4;
  cout << "Circle Area : " << calculatecircleArea(radius) << endl;
  return 0;
}
