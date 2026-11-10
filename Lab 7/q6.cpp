#include <iostream>
using namespace std;

int main() {
  int *count = new int(10);
  cout << *count << endl;
  delete count;
  count = nullptr;
  if (count != nullptr) {
    cout << *count << endl; // <-- line A
  }
}
