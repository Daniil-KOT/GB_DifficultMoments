#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
	: countryCode_(-1), cityCode_(-1), number_(""), additionalNumber_(std::nullopt)
{}

PhoneNumber::PhoneNumber(int countryCode, int cityCode,
						std::string number, std::optional<int> additionalNumber)
	: countryCode_(countryCode), cityCode_(cityCode), 
	number_(number), additionalNumber_(additionalNumber)
{}

PhoneNumber::PhoneNumber(int countryCode, int cityCode,
						std::string number)
	:PhoneNumber::PhoneNumber(countryCode, cityCode, number, std::nullopt)
{}

std::ostream& operator<<(std::ostream& out, PhoneNumber pn)
{
	if (pn.countryCode_ < 0)
	{
		out << "NO NUMBER";
		return out;
	}

	out << "+" << pn.countryCode_ << "(" << pn.cityCode_ << ")" << pn.number_ << " ";
	if (pn.additionalNumber_)
		out << pn.additionalNumber_.value();
	return out;
}
