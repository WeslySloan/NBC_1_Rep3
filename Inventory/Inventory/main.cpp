#include "Inventory.h"
#include <string>

using namespace std;

class Item
{
private:
    string name_;
    int price_;

public:
    Item(const string& name = "아이템", int price = 0)
        : name_(name), price_(price) {}

    void PrintInfo() const 
    {
        cout << "[이름: " << name_ << ", 가격: " << price_ << "G]" << endl;
    }
};

template class Inventory<Item>;

int main()
{
    //Inventory<Item> myInventory(1);
    //myInventory.AddItem(Item());
    //myInventory.PrintAllItems();

    Inventory<Item> myInventory(4);
    myInventory.AddItem(Item("무기", 100));
    myInventory.AddItem(Item("방어구", 200));
    myInventory.AddItem(Item("포션", 50));
    myInventory.AddItem(Item("열쇠", 10));

    myInventory.PrintAllItems();

    return 0;
}