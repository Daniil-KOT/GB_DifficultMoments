#include "PhoneBook.h"

PhoneBook::PhoneBook(std::ifstream& file)
{
	if (file.is_open())
	{
		std::string tmpName, tmpSurname, tmpPatronymic,
			tmpNumber, tmpCountryCode, tmpCityCode, tmpAdditionalNumber;
		std::optional<std::string> patronymic;
		std::optional<int>additionalNumber;
		std::pair<Person, PhoneNumber> tmpPair;

		while (!file.eof())
		{
			std::getline(file, tmpSurname, '|');
			std::getline(file, tmpName, '|');
			std::getline(file, tmpPatronymic, '|');

			if (tmpPatronymic == "-")
				patronymic = std::nullopt;
			else
				patronymic = tmpPatronymic;

			tmpPair.first = Person(tmpSurname, tmpName, patronymic);

			std::getline(file, tmpCountryCode, '|');
			std::getline(file, tmpCityCode, '|');
			std::getline(file, tmpNumber, '|');
			std::getline(file, tmpAdditionalNumber, '\n');

			if (tmpAdditionalNumber == "-")
				additionalNumber = std::nullopt;
			else
				additionalNumber = std::stoi(tmpAdditionalNumber);

			tmpPair.second = PhoneNumber(std::stoi(tmpCountryCode), std::stoi(tmpCityCode), 
										tmpNumber, additionalNumber);

			phoneBook_.push_back(tmpPair);
		}
	}
}

/*
*	����� PhoneBook ������ ��������� ������������� �������� ������,
*	��� ������ ���� ������ �� ���������� � �������.
*/
std::ostream& operator<<(std::ostream& out, const PhoneBook& pb)
{
	for (const auto& i : pb.phoneBook_)
	{
		out << i.first << " " << i.second << std::endl;
	}

	return out;
}

bool operator==(PhoneBook cur, PhoneBook other)
{
	return cur.phoneBook_ == other.phoneBook_;
}

bool operator!=(PhoneBook cur, PhoneBook other)
{
	return !(cur == other);
}

/*
*	� ������ PhoneBook ���������� ����� SortByName,
*	������� ������ ����������� �������� ���������� �� ������� ����� � ���������� �������.
*	���� ������� ����� �����������, �� ���������� ������ ����������� �� ������,
*	���� ����� ����� ���������, �� ���������� ������������ �� ���������.
*	����������� ��������������� ������� sort.
*/
void PhoneBook::SortByName()
{
	std::sort(phoneBook_.begin(), phoneBook_.end(),
		[](const auto& lhs, const auto& rhs)
		{
			if (lhs.first.surname_ != rhs.first.surname_)
				return lhs.first.surname_ < rhs.first.surname_;
			else if (lhs.first.name_ != rhs.first.name_)
				return lhs.first.name_ < rhs.first.name_;
			else
				return lhs.first.patronymic_ < rhs.first.patronymic_;
		});
}

/*
*	���������� ����� SortByPhone, ������� ������ ����������� �������� ���������� �� ������� ���������.
*	����������� ��������������� ������� sort.
*/
void PhoneBook::SortByPhone()
{
	std::sort(phoneBook_.begin(), phoneBook_.end(),
		[](const auto& lhs, const auto& rhs)
		{
			if (lhs.second.countryCode_ != rhs.second.countryCode_)
				return lhs.second.countryCode_ < rhs.second.countryCode_;
			else if (lhs.second.cityCode_ != rhs.second.cityCode_)
				return lhs.second.cityCode_ < rhs.second.cityCode_;
			else if (lhs.second.number_ != rhs.second.number_)
				return lhs.second.number_ < rhs.second.number_;
			else
				return lhs.second.additionalNumber_ < rhs.second.additionalNumber_;
		});
}

/*
*	���������� ����� GetPhoneNumber, ������� ��������� ������� ��������,
*	� ���������� ������ �� ������ � PhoneNumber. ������ ������ ���� ������,
*	���� ������ ����� ���� ������� � �������� �������� � ������.
*	���� �� ������ �� ���� ������� � �������� ��������, �� � ������ ������ ���� ������ �not found�,
*	���� ���� ������� ������ ������ ��������, �� � ������ ������ ���� �found more than 1�.
*	��� ������� �� ��������� ���������� ����������� ��������������� ������� for_each.
*/
std::pair<std::string, PhoneNumber> PhoneBook::GetPhoneNumber(std::string surname)
{
	std::vector<PhoneNumber> phoneNumbers;
	std::for_each(phoneBook_.begin(), phoneBook_.end(),
		[&phoneNumbers, &surname](const auto& value)
		{
			std::string tmpSurname = value.first.surname_;

			//	tolower() is used to avoid typos.
			transform(surname.begin(), surname.end(),
				surname.begin(), [](unsigned char c)
				{ 
					return tolower(c); 
				});

			transform(tmpSurname.begin(), tmpSurname.end(),
				tmpSurname.begin(), [](unsigned char c)
				{ 
					return tolower(c); 
				});

			if (tmpSurname == surname)
			{
				phoneNumbers.push_back(value.second);
			}
		});

	if (phoneNumbers.size() == 0)
		return { "Not found", PhoneNumber() };
	else if (phoneNumbers.size() == 1)
		return { "", phoneNumbers.at(0) };
	else
		return { "Found more than one", 
				phoneNumbers.at(std::rand() % (phoneNumbers.size() - 1)) };
}

/*
*	���������� ����� ChangePhoneNumber, ������� ��������� �������� � ����� ����� �������� �,
*	���� ������� ��������� �������� � ����������, �� ������ ��� ����� �������� �� �����,
*	����� ������ �� ������.
*	����������� ��������������� ������� find_if.
*/
void PhoneBook::ChangePhoneNumber(const Person& person, const PhoneNumber& newNumber)
{
	auto result = std::find_if(phoneBook_.begin(), phoneBook_.end(),
		[&person](const auto& value)
		{
			return value.first == person;
		});

	if (result != phoneBook_.end())
	{
		result->second = newNumber;
		return;
	}
	else { return; }
}
