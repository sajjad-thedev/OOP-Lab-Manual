#include <iostream>
using namespace std;

class Book {
  string title;

public:
  Book(string t) : title(t) { cout << "Opening " << title << endl; }
  ~Book() { cout << "Closing " << title << endl; }
};

int main() {
  Book b1("C++ Primer");
  {
    Book b2("The Pragmatic Programmer");
  }
  cout << "End of main" << endl;
  return 0;
}
