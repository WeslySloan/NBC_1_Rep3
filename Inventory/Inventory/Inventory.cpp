//#include "Inventory.h"
//
//template <typename T>
//Inventory<T>::Inventory(int capacity)
//	: size_(0)
//{
//	if (capacity <= 0)
//	{
//		cout << "�ּ� �뷮�� 1�Դϴ�. �뷮�� 1�� �����մϴ�";
//		capacity_ = 1;
//	}
//	else
//		capacity_ = capacity;
//
//	pItems_ = new T[capacity_];
//	cout << "�κ��丮�� �����Ǿ����ϴ�. (�뷮 : " << capacity_ << ")" << endl;
//
//}
//
//template <typename T>
//Inventory<T>::~Inventory()
//{
//    delete[] pItems_;
//    pItems_ = nullptr;
//    cout << "�κ��丮�� �Ҹ�Ǿ����ϴ�. �޸𸮰� �����Ǿ����ϴ�." << endl;
//}
//
//template <typename T>
//void Inventory<T>::AddItem(const T& item)
//{
//    if (size_ < capacity_)
//    {
//        pItems_[size_] = item;
//        size_++;
//        cout << "�������� �߰��Ǿ����ϴ�. (���� ����: " << size_ << ")" << endl;
//    }
//    else
//        cout << "�κ��丮�� �� á���ϴ�!" << endl;
//}
//
//template <typename T>
//void Inventory<T>::RemoveLastItem()
//{
//    if (size_ > 0)
//    {
//        size_--;
//        cout << "���� ������ �������� ���ŵǾ����ϴ�. (���� ����: " << size_ << ")" << endl;
//    }
//    else
//    {
//        cout << "�κ��丮�� ����ֽ��ϴ�." << endl;
//    }
//}
//
//template <typename T>
//int Inventory<T>::GetSize() const
//{
//    return size_;
//}
//
//template <typename T>
//int Inventory<T>::GetCapacity() const
//{
//    return capacity_;
//}
//
//template <typename T>
//void Inventory<T>::PrintAllItems() const
//{
//    // �κ��丮�� ������� ���
//    if (size_ == 0)
//    {
//        cout << "(�������)" << endl;
//        return;
//    }
//
//    for (int i = 0; i < size_; ++i)
//        pItems_[i].PrintInfo();
//}