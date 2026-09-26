#include <iostream>
using namespace std;

class bankAccount {
private:
  string owner;
  float balance;

public:
  bankAccount(string owner, float balance) {
    this->owner = owner;
    this->balance = balance;
  }

  void deposit(float amount) { this->balance += amount; }

  void withdraw(float amount) {
    if (this->balance - amount < 0) {
      cout << "Insufficient funds" << endl;
    } else {
      this->balance -= amount;
    }
  }

  void showBalance() { cout << "Balance : " << this->balance << endl; }
};

int main(void) {
  bankAccount account("Sajjad", 1000);
  account.deposit(500);
  account.withdraw(2000);
  account.showBalance();
  return 0;
}
