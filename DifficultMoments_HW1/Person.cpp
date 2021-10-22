#include "Person.h"

Person::Person() : surname_(""), name_(""), patronymic_("")
{}

Person::Person(const std::string surname, const std::string name, std::optional<std::string> patronymic)
	: surname_(surname), name_(name), patronymic_(patronymic)
{}

Person::Person(const std::string surname, const std::string name) : Person::Person(surname, name, "")
{}

std::ostream& operator<<(std::ostream& out, const Person& person)
{
	out << person.surname_ << " " << person.name_ << " ";

	if (person.patronymic_)
		out << person.patronymic_.value();

	return out;
}

bool operator==(const Person& lhs, const Person& rhs)
{
	return tie(lhs.name_, lhs.surname_, lhs.patronymic_) ==
		tie(rhs.name_, rhs.surname_, rhs.patronymic_);
}

bool operator<(const Person& lhs, const Person& rhs)
{
	return tie(lhs.name_, lhs.surname_, lhs.patronymic_) <
		tie(rhs.name_, rhs.surname_, rhs.patronymic_);
}
