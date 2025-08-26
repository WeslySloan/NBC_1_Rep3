//#include "Inventory.h"
//
//template <typename T>
//Inventory<T>::Inventory(int capacity)
//	: size_(0)
//{
//	if (capacity <= 0)
//	{
//		cout << "최소 용량은 1입니다. 용량을 1로 보정합니다";
//		capacity_ = 1;
//	}
//	else
//		capacity_ = capacity;
//
//	pItems_ = new T[capacity_];
//	cout << "인벤토리가 생성되었습니다. (용량 : " << capacity_ << ")" << endl;
//
//}
//
//template <typename T>
//Inventory<T>::~Inventory()
//{
//    delete[] pItems_;
//    pItems_ = nullptr;
//    cout << "인벤토리가 소멸되었습니다. 메모리가 해제되었습니다." << endl;
//}
//
//template <typename T>
//void Inventory<T>::AddItem(const T& item)
//{
//    if (size_ < capacity_)
//    {
//        pItems_[size_] = item;
//        size_++;
//        cout << "아이템이 추가되었습니다. (현재 개수: " << size_ << ")" << endl;
//    }
//    else
//        cout << "인벤토리가 꽉 찼습니다!" << endl;
//}
//
//template <typename T>
//void Inventory<T>::RemoveLastItem()
//{
//    if (size_ > 0)
//    {
//        size_--;
//        cout << "가장 마지막 아이템이 제거되었습니다. (현재 개수: " << size_ << ")" << endl;
//    }
//    else
//    {
//        cout << "인벤토리가 비어있습니다." << endl;
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
//    // 인벤토리가 비어있을 경우
//    if (size_ == 0)
//    {
//        cout << "(비어있음)" << endl;
//        return;
//    }
//
//    for (int i = 0; i < size_; ++i)
//        pItems_[i].PrintInfo();
//}