#include <iostream>
using namespace std;

class Root {
public:
  int value;
  Root(int v) : value(v) {}
};

class Left : virtual public Root {
public:
  Left(int v) : Root(v) {}
};

class Right : virtual public Root {
public:
  Right(int v) : Root(v) {}
};

class Combined : public Left, public Right {
public:
  Combined(int v) : Root(v), Left(v), Right(v) {}
};

int main() {
  Combined cmb(9);
  cout << cmb.value << endl;
  return 0;
}
