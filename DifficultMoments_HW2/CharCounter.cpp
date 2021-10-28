#include "CharCounter.h"

CharCounter::CharCounter(std::ifstream& file)
{
	if (file.is_open())
	{
		std::string tmp;

		while (!file.eof())
		{
			std::getline(file, tmp, '\n');
			text_.append(tmp);
		}
	}
}

uint64_t CharCounter::CountCountIfFind()
{
	Timer timer("Count_If + Find");

	uint64_t result = std::count_if(CharCounter::text_.begin(), CharCounter::text_.end(),
		[](const char& value)
		{
			return (CharCounter::vowels_.find(value) != CharCounter::vowels_.npos);
		});

	timer.print();
	return result;
}

uint64_t CharCounter::CountCountIfFor()
{
	Timer timer("Count_If + For");

	uint64_t result = std::count_if(CharCounter::text_.begin(), CharCounter::text_.end(),
		[](const char& value)
		{
			for (const char& it : CharCounter::vowels_)
			{
				if (it == value)
					return true;
			}
			return false;
		});

	timer.print();
	return result;
}

uint64_t CharCounter::CountForFind()
{
	Timer timer("For + Find");

	uint64_t result = 0;

	for (const char& ch : CharCounter::text_)
	{
		if (CharCounter::vowels_.find(ch) != CharCounter::vowels_.npos)
			++result;
	}

	timer.print();
	return result;
}

uint64_t CharCounter::CountTwoFor()
{
	Timer timer("For + For");

	uint64_t result = 0;

	for (const char& ch : CharCounter::text_)
	{
		for (const char& vow : CharCounter::vowels_)
			if (ch == vow)
				++result;
	}

	timer.print();
	return result;
}
