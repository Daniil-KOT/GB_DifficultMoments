#pragma once

#include "Timer.h"
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

class CharCounter
{
public:

	CharCounter(std::ifstream& file);

	uint64_t CountCountIfFind();

	uint64_t CountCountIfFor();

	uint64_t CountForFind();

	uint64_t CountTwoFor();

	static std::string vowels_;

	std::string text_;
};