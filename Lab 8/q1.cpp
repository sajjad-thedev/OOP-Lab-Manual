#include <iostream>
using namespace std;

int main() {
  int temperature = 72;
  int *tempPtr = &temperature;
  *tempPtr = 100;
  cout << temperature;
  return 0;
}
