#include <iostream>
using namespace std;

struct Book {
  string title;
  string author;
  float price;
};

int main(void) {
  Book book;
  book.title = "Forty Rules of Love";
  book.author = "Elif Shafak";
  book.price = 780;
  cout << "Title : " << book.title << endl;
  cout << "Author : " << book.author << endl;
  cout << "Price : " << book.price << endl;
  return 0;
}
