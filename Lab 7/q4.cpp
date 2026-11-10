#include <iostream>
using namespace std;

void incrementByPointer(int *counter) { *counter += 1; }

int main() {
  int attempts = 0;
  incrementByPointer(&attempts);
  incrementByPointer(&attempts);
  incrementByPointer(&attempts);
  // The final value would have been 1 if the parameter were int counter (by
  // value) rather than int *counter
  cout << "Final Value: " << attempts << endl;
  return 0;
}
