#include <iostream>
using namespace std;

int main() {
  double *temp = new double[6];
  for (int i = 0; i < 6; i++) {
    *(temp + i) = 20.5 + i;
    cout << "Value " << i << ": " << *temp << endl;
  }

  delete[] temp;
  temp = nullptr;

  return 0;
}
