#include <iostream>
using namespace std;

class Car {
private:
  string brand;
  float fuelLevel;

public:
  Car(string b, float f) : brand(b), fuelLevel(f) {}
  float getFuel() { return fuelLevel; }
  void setFuel(float f) { fuelLevel = f; }
};

void swapFuel(Car &c1, Car &c2) {
  float temp = c1.getFuel();
  c1.setFuel(c2.getFuel());
  c2.setFuel(temp);
}

int main() {
  Car c1("Toyota", 60);
  Car c2("Honda", 35);
  cout << "Before : \nCar 1 : " << c1.getFuel() << "\nCar 2 : " << c2.getFuel()
       << endl;
  swapFuel(c1, c2);
  cout << "After : \nCar 1 : " << c1.getFuel() << "\nCar 2 : " << c2.getFuel()
       << endl;

  return 0;
}
