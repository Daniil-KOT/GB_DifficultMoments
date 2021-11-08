#include "SentenceSort.h"

SentenceSort::SentenceSort(std::string text)
{
	size_t startOffset = 0, newOffset;
	std::string tmp;
	while (startOffset < text.size())
	{
		newOffset = StringFindPunctuation(text, startOffset);
		tmp = text.substr(startOffset, (newOffset - startOffset) + 2); // +2 используется для добавления в подстроку точки и пробела
		dictionary_.insert({ tmp.size(), tmp });
		startOffset = newOffset + 2;				// +2 используется, чтобы "перескочить" через точку и пробел
	}
}

size_t SentenceSort::StringFindPunctuation(std::string text, size_t offset)
{
	std::vector<size_t> positions;
	positions.push_back(text.find('.', offset));
	positions.push_back(text.find('!', offset));
	positions.push_back(text.find('?', offset));

	auto it = std::min_element(positions.begin(), positions.end());
	if (*it != std::string::npos)
		return *it;
	return std::string::npos;
}

void SentenceSort::Print()
{
	std::for_each(dictionary_.begin(), dictionary_.end(),
		[](auto& val) {std::cout << val.second << std::endl; });
}
