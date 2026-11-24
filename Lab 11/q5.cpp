#include <iostream>
using namespace std;

class Vehicle {
public:
  string brand;
  Vehicle(string b) : brand(b) {}
  void describe() { cout << brand << " is a vehicle." << endl; }
};

class Car : public Vehicle {
  int doors;

public:
  Car(string b, int d) : Vehicle(b), doors(d) {}
  void describe() {
    cout << brand << " is a car with " << doors << " doors." << endl;
  }
};

int main() {
  Car c("Toyota", 4);
  c.describe();
  return 0;
}
