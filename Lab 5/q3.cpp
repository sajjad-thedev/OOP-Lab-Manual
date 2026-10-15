// Call A and Call C print the copying message and Call B does not print the
// copying message. Call B behaves differently the A and C because Call B is
// assigning b1 to already created object b2 therefore the copy constructor is
// not called.

#include <iostream>
using namespace std;

class Book {
private:
  string title;

public:
  Book(string t) : title(t) {}
  // copy constructor
  Book(const Book &source) : title(source.title) {
    cout << "Copying book: " << title << endl;
  }

  string getTitle() const { return title; }
};

void printBook(Book b) { cout << b.getTitle() << endl; }

int main(void) {
  Book b1("C++ Primer"), b2("Clean Code");
  Book b3 = b1;  // Call A
  b2 = b1;       // Call B
  printBook(b1); // Call C
  return 0;
}
