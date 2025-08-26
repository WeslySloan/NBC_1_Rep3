#include "Inventory.h"
#include <string>

using namespace std;

class Item
{
private:
    string name_;
    int price_;

public:
    Item(const string& name = "������", int price = 0)
        : name_(name), price_(price) {}

    void PrintInfo() const 
    {
        cout << "[�̸�: " << name_ << ", ����: " << price_ << "G]" << endl;
    }
};

template class Inventory<Item>;

int main()
{
    //Inventory<Item> myInventory(1);
    //myInventory.AddItem(Item());
    //myInventory.PrintAllItems();

    Inventory<Item> myInventory(4);
    myInventory.AddItem(Item("����", 100));
    myInventory.AddItem(Item("��", 200));
    myInventory.AddItem(Item("����", 50));
    myInventory.AddItem(Item("����", 10));

    myInventory.PrintAllItems();

    return 0;
}