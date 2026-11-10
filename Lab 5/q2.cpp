#include <iostream>
using namespace std;

class BankAccount {
  string name;
  float balance;

public:
  BankAccount(string name, float balance) {
    this->name = name;
    this->balance = balance;
  }
  void setBalance(float b) {
    if (b >= 0) {
      this->balance = b;
    }
  }
  float getBalance() const { return balance; };
};

int main(void) {
  BankAccount acc("Bilal", 300.0);
  acc.setBalance(300 - 100);
  cout << "balance : " << acc.getBalance() << endl;
  return 0;
}
