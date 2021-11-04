#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <algorithm>
#include <random>
#include "d:/Timer.h"

using namespace std;

//================ EX.1 ================

/*
*	Имеется отсортированный массив целых чисел. 
*	Необходимо разработать функцию insert_sorted, 
*	которая принимает вектор и новое число 
*	и вставляет новое число в определенную позицию в векторе, 
*	чтобы упорядоченность контейнера сохранялась. 
*	Реализуйте шаблонную функцию insert_sorted, 
*	которая сможет аналогично работать с любым контейнером, 
*	содержащим любой тип значения.
*/

void InsertSorted(vector<int>& vec, int value)
{
	auto it = upper_bound(vec.begin(), vec.end(), value);
	vec.insert(it, value);
}

/*
*	Не работает с array<>, потому что нет медота insert()
*/
template<class Cont_, class T>
void InsertSorted(Cont_& container, T value)
{
	auto it = upper_bound(container.begin(), container.end(), value);
	container.insert(it, value);
}

template<class Cont_>
void PrintContainer(Cont_& vec)
{
	for (auto val : vec)
		cout << val << " ";
	cout << "\n\n";
}

//======================================

//================ EX.2 ================

/*
*	Сгенерируйте вектор, состоящий из 100 вещественный чисел, 
*	представляющий собой значения аналогового сигнала. 
*	На основе этого массива чисел создайте другой вектор целых чисел, 
*	представляющий цифровой сигнал, в котором будут откинуты дробные части чисел. 
*	Выведите получившиеся массивы чисел. 
*	Посчитайте ошибку, которой обладает цифровой сигнал по сравнению с аналоговым по формуле:
*	
*	i=0
*	SUM	= (a[i]-b[i])^2
*	N-1
*/

double SignalError(vector<double> analogue, vector<int> digital)
{
	Timer timer("Signal error");
	double result = 0.0f;

	auto it = digital.begin();

	for_each(analogue.begin(), analogue.end(),									// ~0.067 ms
		[&](auto& val)
		{
			result += pow((val - *it), 2);
			++it;
		});

	/*for (int i = 0; i < analogue.size(); ++i)									// ~0.043 ms
		result += pow((analogue[i] - digital[i]), 2);*/

	timer.print();
	return result;
}

//======================================

int main()
{
	cout << "================ EX.1 ================\n\n";

	vector<int> vec{ 1, 2, 3, 3, 5, 7, 9 };
	InsertSorted(vec, 4);

	PrintContainer(vec);

	vector<string> strVec{ "abc", "acb", "acbd", "acbde" };
	InsertSorted(strVec, "acbc");

	PrintContainer(strVec);

	list<char> lst{ 'a', 'b', 'e', 'f' };
	InsertSorted(lst, 'd');

	while (!lst.empty())
	{
		cout << lst.front() << " ";
		lst.pop_front();
	}
	cout << "\n\n";

	deque<double> deq{ 0.1, 0.2, 0.4, 0.5 };
	InsertSorted(deq, 0.3);

	PrintContainer(deq);

	string str = "abce";
	InsertSorted(str, 'd');

	PrintContainer(str);

	cout << "================ EX.2 ================\n\n";

	vector<double> analogueSignal(100);

	srand(time(0));
	generate(analogueSignal.begin(), analogueSignal.end(), 
		[]() { return (static_cast<double>(rand() % 100) / ((rand() % 10) + 1)); });

	PrintContainer(analogueSignal);

	vector<int> digitalSignal(100);

	copy(analogueSignal.begin(), analogueSignal.end(), digitalSignal.begin());
	PrintContainer(digitalSignal);

	cout << "Signal error = " << SignalError(analogueSignal, digitalSignal) << "\n\n";
}

