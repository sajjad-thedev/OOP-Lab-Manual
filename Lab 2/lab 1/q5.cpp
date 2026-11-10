#include <iostream>
using namespace std;

int main(void) {
  string firstName = "Sajjad";
  string lastName = "Ahmed";
  string fullName = firstName + " " + lastName;
  cout << "Full Name : " << fullName << endl;
  cout << "Length : " << fullName.length() << endl;
  cout << "First Char : " << fullName[0] << endl;
  return 0;
}
