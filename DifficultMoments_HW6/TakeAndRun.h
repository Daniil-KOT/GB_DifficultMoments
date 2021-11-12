#pragma once
#include <iostream>
#include <thread>
#include <mutex>
#include <map>
#include <vector>
#include <chrono>
#include <algorithm>

/*
*	Промоделировать следующую ситуацию. Есть два человека (2 потока): хозяин и вор. 
*	Хозяин приносит домой вещи. При этом у каждой вещи есть своя ценность. 
*	Вор забирает вещи, каждый раз забирает вещь с наибольшей ценностью.
*/
class TakeAndRun
{
protected:

	struct Item
	{
		Item(int quantity, int price, std::string name)
			:quantity_(quantity), price_(price), name_(name)
		{};
		int quantity_ = 10;
		int price_;
		std::string name_;
	};

public:
	TakeAndRun();

	TakeAndRun(int price, std::string name);

	void BringThing();

	void TakeThing();

	void PrintStorage();

	void AddItems(int quantity, int price, std::string name);

	static const int maxPrice_;

private:

	static std::map<int, std::string> collection_;
	std::vector<Item> storage_;
	std::mutex mtx;
};

