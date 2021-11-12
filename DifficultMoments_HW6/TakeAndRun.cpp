#include "TakeAndRun.h"

using std::this_thread::sleep_for;
using std::chrono::milliseconds;

TakeAndRun::TakeAndRun()
{
	storage_.push_back(Item(10, maxPrice_, "Diamond necklace"));
}

TakeAndRun::TakeAndRun(int price, std::string name)
{
	srand(time(0));
	storage_.push_back(Item((rand() % 10) + 1, price, name));
}

void TakeAndRun::BringThing()
{
	sleep_for(milliseconds(3000));
	srand(time(0));
	int quantity = (rand() % 10) + 1;
	auto it = collection_.lower_bound(rand() % maxPrice_);
	
	mtx.lock();
	std::cout << "Host brought:\t" << it->second << "\nPrice:\t" << it->first << 
		"\nQuantity:\t" << quantity << "\n\n";
	mtx.unlock();

	storage_.push_back(Item(quantity, it->first, it->second));

	if (!storage_.empty())
		BringThing();
}

void TakeAndRun::TakeThing()
{
	sleep_for(milliseconds(1000));
	srand(time(0));
	int quantity = 1;
	auto it = std::max_element(storage_.begin(), storage_.end(),
		[](Item& lhs, Item& rhs) { return lhs.price_ < rhs.price_; });

	if (it->quantity_ > 6)
	{
		quantity = (rand() % 5) + 1;
		it->quantity_ -= quantity;
	}
	else if (it->quantity_ > 2)
	{
		quantity = (rand() % 2) + 1;
		it->quantity_ -= quantity;
	}
	else if (it->quantity_ == 2)
	{
		it->quantity_ -= quantity;
	}

	mtx.lock();
	std::cout << "Thief stole:\t" << it->name_ << "\nPrice:\t" << it->price_ <<
		"\nQuantity:\t" << quantity << "\n\n";
	mtx.unlock();

	if (it->quantity_ == 1)
	{
		mtx.lock();
		std::cout << "Thief stole:\t" << it->name_ << "\nPrice:\t" << it->price_ <<
			"\nQuantity:\t" << quantity << "\n\n";
		mtx.unlock();
		storage_.erase(it);
	}

	if (!storage_.empty())
		TakeThing();
}

void TakeAndRun::PrintStorage()
{
	std::cout << "Name\tPrice\tQuantity\n\n";
	for (auto i : storage_)
		std::cout << i.name_ << '\t' << i.price_ << '\t' << i.quantity_ << '\n';
}

void TakeAndRun::AddItems(int quantity, int price, std::string name)
{
	storage_.push_back(Item(quantity, price, name));
}
