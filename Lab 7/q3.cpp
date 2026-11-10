#include <iostream>
using namespace std;

class Car {
  string model;
  static int carCount;

public:
  Car() { carCount++; }
  Car(string m) : model(m) { carCount++; }
  static int getCarCount() { return carCount; }
};

int Car::carCount = 0;

int main() {
  Car c1, c2, c3, c4;
  cout << "Count : " << Car::getCarCount() << endl;
  return 0;
}
