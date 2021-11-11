#include "MyContainer.h"

MyContainer::MyContainer(std::initializer_list<int> values)
	:size_(values.size()), data_(new int[size_])
{
	std::copy(values.begin(), values.end(), data_.get());
}

MyContainer::iterator MyContainer::begin()
{
	return iterator(data_.get());
}

MyContainer::iterator MyContainer::end()
{
	return iterator(data_.get() + size_);
}

MyContainer::const_iterator MyContainer::begin() const
{
	return const_iterator(data_.get());
}

MyContainer::const_iterator MyContainer::end() const
{
	return const_iterator(data_.get() + size_);
}
