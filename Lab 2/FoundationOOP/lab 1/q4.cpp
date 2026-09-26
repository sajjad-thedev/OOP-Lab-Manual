// One key difference between the struct version and the class version is that
// in struct version, there were no specific behaviors like applyDiscount.
// Whereas in the class version, I have a method specific to this class.

#include <string>
using namespace std;

class Book {
  string title;
  string author;
  float price;

public:
  Book(string title, string author, float price) {
    this->title = title;
    this->author = author;
    this->price = price;
  }
  void applyDiscount(float percent) {
    if (percent > 0 && percent <= 100) {
      price -= (percent / 100) * price;
    }
  }
};

int main(void) { return 0; }
