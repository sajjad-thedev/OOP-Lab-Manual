#include <iostream>
using namespace std;

class bankAccount {
  float balance;

public:
  float getBalance() const { return balance; }
  void setBalance(float b) {
    if (b > 0) {
      this->balance = b;
      cout << b << " is accepted" << endl;
    } else {
      cout << b << " is rejected" << endl;
    }
  }
};

int main(void) {
  bankAccount account;
  account.setBalance(-300);
  account.setBalance(800);
  cout << "Result : " << account.getBalance() << endl;
  return 0;
}
