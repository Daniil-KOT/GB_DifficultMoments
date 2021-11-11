#include <list>
#include <array>
#include "D:/UsefulHeaders/Timer.h"

//============ EX.2 ============

#include "SentenceSort.h"

//==============================

using namespace std;

//============ EX.1 ============

/*
*	Создать шаблонную функцию, которая принимает итераторы 
*	на начало и конец последовательности слов, 
*	и выводящую в консоль список уникальных слов
*	(если слово повторяется больше 1 раза, то вывести его надо один раз).
*	Продемонстрировать работу функции, передав итераторы различных типов.
*/
template<typename T>
void PrintUnique(T begin, T end)				// Возможно было бы более универсально хранить строки в const char*, вместо string?
{
	Timer t("Print Unique");

	vector<string> tmp;

	while (begin != end)
	{
		if (find(tmp.begin(), tmp.end(), *begin) == tmp.end())
			tmp.push_back(*begin);
		++begin;
	}

	for (auto sentence : tmp)
		cout << sentence << endl;
	t.print();

}

/*
*	Пытался добавить эту реализацию в основной шаблон с помощью условия, 
*	однако компилятор так и не захотел собирать проект.
*/
void PrintUnique(string::iterator begin, string::iterator end)
{
	Timer t("Print Unique (string specialized)");

	vector<string> tmp;

	string str;
	while (begin != end)
	{
		if (*begin != ' ')							
		{
			str.push_back(*begin);					
		}
		else
		{
			if (find(tmp.begin(), tmp.end(), str) == tmp.end())
			{
				tmp.push_back(str);
			}
			str.clear();
		}
		++begin;
	}

	for (auto sentence : tmp)
		cout << sentence << endl;
	t.print();
}

//==============================

int main()
{
	cout << "================= EX.1 =================\n\n";

	vector<string> vecStr{ "hello", "world", "my", "name", "is", "daniil", 
		"hello", "world", "my", "name", "is", "daniil" };
	PrintUnique(vecStr.begin(), vecStr.end());

	list<string> lstStr{ "hello", "world", "my", "name", "is", "daniil",
		"hello", "world", "my", "name", "is", "daniil" };
	PrintUnique(lstStr.begin(), lstStr.end());

	string str{"hello world my name is daniil hello world my name is daniil"};
	PrintUnique(str.begin(), str.end());

	array<string, 12> arrStr{ "hello", "world", "my", "name", "is", "daniil",
		"hello", "world", "my", "name", "is", "daniil" };
	PrintUnique(arrStr.begin(), arrStr.end());

	cout << "================= EX.2 =================\n\n";

	string text;
	cout << "Please enter your text separating sentences by dots, " <<
		"question, or exclamation marks!\n";
	getline(cin, text);
	SentenceSort sorted(text);
	sorted.Print();
}