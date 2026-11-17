#include <iostream>
using namespace std;

double computeAverage(int *data, int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += *(data + i);
  }
  return sum / size;
}

int main() {
  cout << "How many days to track : ";
  int n;
  cin >> n;
  int *data = new int[n];
  for (int i = 0; i < n; i++) {
    cout << "Attendance count for day " << i + 1 << ": ";
    cin >> *(data + i);
  }
  cout << "Average: " << computeAverage(data, n) << endl;

  delete[] data;
  data = nullptr;
  return 0;
}
