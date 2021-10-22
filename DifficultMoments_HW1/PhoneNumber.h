#pragma once

#include <iostream>
#include <string>
#include <optional>

//======================= EX.2 =======================

/*
*	—оздайте структуру PhoneNumber с 4 пол€ми:
*	Ј         код страны (целое число)
*	Ј         код города (целое число)
*	Ј         номер (строка)
*	Ј         добавочный номер (целое число, опциональный тип)
*	ƒл€ этой структуры перегрузите оператор вывода. 
*	Ќеобходимо, чтобы номер телефона выводилс€ в формате: 
*	+7(911)1234567 12, где 7 Ц это номер страны, 911 Ц номер города, 
*	1234567 Ц номер, 12 Ц добавочный номер. 
*	≈сли добавочного номера нет, то его выводить не надо.
*/
struct PhoneNumber
{
	PhoneNumber();

	PhoneNumber(int countryCode, int cityCode,
				std::string number, std::optional<int> additionalNumber);

	PhoneNumber(int countryCode, int cityCode,
				std::string number);

	friend std::ostream& operator << (std::ostream& out, PhoneNumber pn);

	int countryCode_;

	int cityCode_;

	std::string number_;

	std::optional<int> additionalNumber_;
};

//====================================================