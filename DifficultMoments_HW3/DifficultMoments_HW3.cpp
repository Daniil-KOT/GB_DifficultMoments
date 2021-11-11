#include "Matrix.h"
#include "MyContainer.h"
#include <algorithm>

using namespace std;

//================ EX.1 ================

/*
*	Написать функцию, добавляющую в конец списка вещественных чисел элемент, 
*	значение которого равно среднему арифметическому всех его элементов.
*/
void ListAverage(list<float>& lst)
{
	auto it = lst.begin();
	float result = 0, counter = 0;
	while (it != lst.end())
	{
		result += *it;
		++counter;
		it = next(it);
	}
	result /= counter;
	lst.push_back(result);
}

void PrintList(list<float> lst)
{
	auto it = lst.begin();
	while (it != lst.end())
	{
		cout << *it << " ";
		it = next(it);
	}
	cout << endl;
}

//======================================

int main()
{
	cout << "================ EX.1 ================\n\n";

	list<float> lst = { 0.3, 2.7, 2.3, 4, 5, 6, 7, 8, 9, 10.7 };

	PrintList(lst);

	ListAverage(lst);

	PrintList(lst);

	cout << "\n\n================ EX.2 ================\n\n";

	vector<int> iMatrix = {2, 4, 3, 5, 7, 8, 6, 9, 1}; // Determinant = 51

	Matrix<int> intMtx(3, iMatrix);
	intMtx.PrintMatrix();
	auto initialIntMatrix = intMtx.GetMatrix();
	cout << intMtx.Determinant(3, initialIntMatrix) << "\n\n";

	vector<float> fMatrix = { 2.2, 4.1, 3.0, 5.7, 7.1, 8.0, 6.6, 9.3, 1.2 }; // Determinant = 61.95

	Matrix<float> floatMtx(3, fMatrix);
	floatMtx.PrintMatrix();
	auto initialFloatMatrix = floatMtx.GetMatrix();
	cout << floatMtx.Determinant(3, initialFloatMatrix);

	cout << "\n\n================ EX.3 ================\n\n";

	MyContainer mc{ 2, 5, 10, 12, 7 };
	for_each(mc.begin(), mc.end(), [](auto val) {cout << val << " "; });
}
