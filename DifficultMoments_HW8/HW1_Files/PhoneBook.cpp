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
*	Класс PhoneBook должен содержать перегруженный оператор вывода,
*	для вывода всех данных из контейнера в консоль.
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
*	В классе PhoneBook реализуйте метод SortByName,
*	который должен сортировать элементы контейнера по фамилии людей в алфавитном порядке.
*	Если фамилии будут одинаковыми, то сортировка должна выполняться по именам,
*	если имена будут одинаковы, то сортировка производится по отчествам.
*	Используйте алгоритмическую функцию sort.
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
*	Реализуйте метод SortByPhone, который должен сортировать элементы контейнера по номерам телефонов.
*	Используйте алгоритмическую функцию sort.
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
*	Реализуйте метод GetPhoneNumber, который принимает фамилию человека,
*	а возвращает кортеж из строки и PhoneNumber. Строка должна быть пустой,
*	если найден ровно один человек с заданном фамилией в списке.
*	Если не найден ни один человек с заданной фамилией, то в строке должна быть запись «not found»,
*	если было найдено больше одного человека, то в строке должно быть «found more than 1».
*	Для прохода по элементам контейнера используйте алгоритмическую функцию for_each.
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
*	Реализуйте метод ChangePhoneNumber, который принимает человека и новый номер телефона и,
*	если находит заданного человека в контейнере, то меняет его номер телефона на новый,
*	иначе ничего не делает.
*	Используйте алгоритмическую функцию find_if.
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
