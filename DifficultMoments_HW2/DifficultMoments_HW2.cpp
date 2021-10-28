#include "CharCounter.h"
#include <algorithm>
#include <cassert>
#include <vector>
#include <ctime>

/*
*	Реализуйте шаблонную функцию Swap, 
*	которая принимает два указателя и обменивает местами значения, 
*	на которые указывают эти указатели 
*	(нужно обменивать именно сами указатели, 
*	переменные должны оставаться в тех же адресах памяти).
*/
template<typename T>
void Swap(T*& firstPtr, T*& secondPtr)
{
	T* tmpPtr = std::move(firstPtr);
	firstPtr = std::move(secondPtr);
	secondPtr = std::move(tmpPtr);
}

/*
*	Реализуйте шаблонную функцию SortPointers, 
*	которая принимает вектор указателей 
*	и сортирует указатели по значениям, на которые они указывают.
*/
template<typename T>
void SortPointers(std::vector<T*>* pointers)
{
	Timer timer("SortPointers");
	std::sort(pointers->begin(), pointers->end(),
		[](const auto lhs, const auto rhs)
		{
			return *lhs < *rhs;
		});
	timer.print();
}

//====================== EX.3 ======================

std::string CharCounter::vowels_ = { 'a', 'e', 'i', 'o', 'u', 'y' };

//==================================================

int main()
{
	std::cout << "=============== EX.1 ===============\n\n";

	uint16_t a = 5u, b = 9u;
	uint16_t* pa = &a;
	uint16_t* pb = &b;

	std::cout << "a's address = " << pa << "\ta's value = " << a << 
		"\n" << "b's address = " << pb << "\tb's value = " << b << "\n\n";

	Swap(pa, pb);

	std::cout << "a's address = " << pa << "\ta's value = " << a << 
		"\n" << "b's address = " << pb << "\tb's value = " << b << "\n\n";

	assert(pa == &b);
	assert(pb == &a);

	std::cout << "====================================\n\n";

	std::cout << "=============== EX.2 ===============\n\n";

	std::vector<int*> pointers;
	srand(time(0));

	for (size_t i = 0; i < 10; ++i)
	{
		int* tmp = new int((rand() + i * (2 + i)));
		pointers.push_back(tmp);
	}

	for (const auto& it : pointers)
		std::cout << *it << " ";

	std::cout << "\n\n";

	SortPointers(&pointers);

	std::cout << "\n";

	for (const auto& it : pointers)
		std::cout << *it << " ";

	std::cout << "\n\n====================================\n\n";

	std::cout << "=============== EX.3 ===============\n\n";

	std::ifstream file("d:\\War and peace.txt");

	CharCounter counter(file);

	std::cout << counter.CountCountIfFind() << "\n\n";		// 781.141 ms execution time
	std::cout << counter.CountCountIfFor() << "\n\n";		// 911.246 ms execution time
	std::cout << counter.CountForFind() << "\n\n";			// 648.714 ms execution time
	std::cout << counter.CountTwoFor() << "\n\n";			// 826.106 ms execution time

	std::cout << "\n\n====================================\n\n";
}