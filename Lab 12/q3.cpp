#include <iostream>
using namespace std;

class Vehicle {
public:
  virtual void honk() { cout << "Generic honk" << endl; }
};
class Car : public Vehicle {
public:
  void honk() override { cout << "Beep beep!" << endl; }
};
class Truck : public Vehicle {
public:
  void honk() override { cout << "HOOONK!" << endl; }
};

int main() {
  Vehicle *fleet[2] = {new Car(), new Truck()};
  for (int i = 0; i < 2; i++)
    fleet[i]->honk();
}
