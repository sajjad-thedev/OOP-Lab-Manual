#include <iostream>
using namespace std;

class Inventory {
  string itemName;
  int quantity;    // should never be negative
  float unitPrice; // should never be negative
public:
  string getItemName() const { return itemName; }
  int getQuantity() const { return quantity; }
  float getUnitPrice() const { return unitPrice; }

  void setItemName(string itemName) {
    if (!itemName.empty())
      this->itemName = itemName;
  }
  void setQuantity(int quantity) {
    if (quantity > 0)
      this->quantity = quantity;
  }
  void setUnitPrice(float unitPrice) {
    if (unitPrice > 0)
      this->unitPrice = unitPrice;
  }
};

int main() {
  Inventory inv;
  inv.setQuantity(4);
  inv.setQuantity(-5); // this value is rejected
  cout << "Quantity: " << inv.getQuantity() << endl;
  return 0;
}
