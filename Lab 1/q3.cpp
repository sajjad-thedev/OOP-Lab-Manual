#include <iostream>
#include <string>
using namespace std;

class Book {
  string title;
  string author;
  float price;

public:
  Book(string t, string a, float p) {
    title = t;
    author = a;
    price = p;
  }
  void applyDiscount(float percent) {
    price = price - (price * (percent / 100));
  }
  float getPrice() { return price; }
};

int main() {
  Book book = Book("Forty rules of love", "Elif Shafak", 920);
  cout << "old Price was : " << book.getPrice() << endl;
  book.applyDiscount(12);
  cout << "New Price is : " << book.getPrice() << endl;
  return 0;
}
