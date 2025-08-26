#pragma once
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Inventory
{
private:
    T* pItems_;
    int capacity_;
    int size_;

public:
    
    explicit Inventory(int capacity = 10)
        : size_(0)
    {
        if (capacity <= 0)
        {
            cout << "최소 용량은 1입니다. 용량을 1로 보정합니다." << endl;
            capacity_ = 1;
        }
        else
            capacity_ = capacity;

        pItems_ = new T[capacity_];
        cout << "인벤토리가 생성되었습니다. (용량 : " << capacity_ << ")" << endl;
    }

    ~Inventory()
    {
        delete[] pItems_;
        pItems_ = nullptr;
        cout << "인벤토리가 소멸되었습니다. 메모리가 해제되었습니다." << endl;
    }

    void AddItem(const T& item)
    {
        if (size_ < capacity_)
        {
            pItems_[size_] = item;
            size_++;
            cout << "아이템이 추가되었습니다. (현재 개수: " << size_ << ")" << endl;
        }
        else
            cout << "인벤토리가 꽉 찼습니다!" << endl;
    }

    void RemoveLastItem()
    {
        if (size_ > 0)
        {
            size_--;
            cout << "가장 마지막 아이템이 제거되었습니다. (현재 개수: " << size_ << ")" << endl;
        }
        else
        {
            cout << "인벤토리가 비어있습니다." << endl;
        }
    }

    int GetSize() const
    {
        return size_;
    }

    int GetCapacity() const
    {
        return capacity_;
    }

    void PrintAllItems() const
    {
        if (size_ == 0)
        {
            cout << "(비어있음)" << endl;
            return;
        }

        for (int i = 0; i < size_; ++i)
            pItems_[i].PrintInfo();
    }
};