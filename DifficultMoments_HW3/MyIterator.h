#pragma once

#include <iterator>

/*
*   Реализовать собственный класс итератора, 
*   с помощью которого можно будет проитерироваться 
*   по диапазону целых чисел в цикле for-range-based.
*/
template<typename T>
class MyIterator :
    public std::iterator <std::input_iterator_tag, T>
{
private:
    friend class MyContainer;
    MyIterator(T* ptr);

public:
    MyIterator(const MyIterator& it);
    bool operator !=(MyIterator const& other) const;
    bool operator ==(MyIterator const& other) const;
    typename MyIterator<T>::reference operator*() const;
    MyIterator& operator++();

private:
   T* ptr_;
};

template<typename T>
MyIterator<T>::MyIterator(T* ptr)
    :ptr_(ptr)
{}

template<typename T>
MyIterator<T>::MyIterator(const MyIterator& it)
    :ptr_(it.ptr_)
{}

template<typename T>
bool MyIterator<T>::operator!=(MyIterator const& other) const
{
    return this->ptr_ != other.ptr_;
}

template<typename T>
bool MyIterator<T>::operator==(MyIterator const& other) const
{
    return !(this != other);
}

template<typename T>
typename MyIterator<T>::reference MyIterator<T>::operator*() const
{
    return *ptr_;
}

template<typename T>
MyIterator<T>& MyIterator<T>::operator++()
{
    ++ptr_;
    return *this;
}
