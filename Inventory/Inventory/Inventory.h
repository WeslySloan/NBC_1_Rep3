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
            cout << "�ּ� �뷮�� 1�Դϴ�. �뷮�� 1�� �����մϴ�." << endl;
            capacity_ = 1;
        }
        else
            capacity_ = capacity;

        pItems_ = new T[capacity_];
        cout << "�κ��丮�� �����Ǿ����ϴ�. (�뷮 : " << capacity_ << ")" << endl;
    }

    ~Inventory()
    {
        delete[] pItems_;
        pItems_ = nullptr;
        cout << "�κ��丮�� �Ҹ�Ǿ����ϴ�. �޸𸮰� �����Ǿ����ϴ�." << endl;
    }

    void AddItem(const T& item)
    {
        if (size_ < capacity_)
        {
            pItems_[size_] = item;
            size_++;
            cout << "�������� �߰��Ǿ����ϴ�. (���� ����: " << size_ << ")" << endl;
        }
        else
            cout << "�κ��丮�� �� á���ϴ�!" << endl;
    }

    void RemoveLastItem()
    {
        if (size_ > 0)
        {
            size_--;
            cout << "���� ������ �������� ���ŵǾ����ϴ�. (���� ����: " << size_ << ")" << endl;
        }
        else
        {
            cout << "�κ��丮�� ����ֽ��ϴ�." << endl;
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
            cout << "(�������)" << endl;
            return;
        }

        for (int i = 0; i < size_; ++i)
            pItems_[i].PrintInfo();
    }
};