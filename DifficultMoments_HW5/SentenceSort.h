#pragma once
#include <iostream>
#include <map>
#include <array>
#include <vector>
#include <algorithm>

/*
*	Используя ассоциативный контейнер, напишите программу,
*	которая будет считывать данные введенные пользователем
*	из стандартного потока ввода и разбивать их на предложения.
*	Далее программа должна вывести пользователю все предложения,
*	отсортировав их по длине.
*/
class SentenceSort
{
public:
	SentenceSort(std::string text);

	size_t StringFindPunctuation(std::string text, size_t offset);

	void Print();

private:
	std::multimap<size_t, std::string>	dictionary_;
	static std::array<const char, 3> punctuationMarks_;
};

