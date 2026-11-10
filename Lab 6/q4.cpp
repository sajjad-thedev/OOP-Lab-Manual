#include <iostream>
using namespace std;

class Product {
private:
  const int id;
  string name;

public:
  Product(int i, string n) : id(i), name(n) {}
};
