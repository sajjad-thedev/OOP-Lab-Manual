#include <iostream>
using namespace std;

int main() {
  int prices[5] = {120, 45, 300, 75, 60};
  int *p = prices;
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += *(p + i);
  }
  cout << "Sum: " << sum << endl;
  return 0;
}
