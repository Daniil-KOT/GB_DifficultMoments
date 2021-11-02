#pragma once

#include <memory>
#include "MyIterator.h"

class MyContainer
{
public:
	typedef MyIterator<int> iterator;
	typedef MyIterator<const int> const_iterator;

	MyContainer(std::initializer_list<int> values);

	iterator begin();
	iterator end();

	const_iterator begin() const;
	const_iterator end() const;

private:
	size_t size_;
	std::unique_ptr<int[]> data_;
};