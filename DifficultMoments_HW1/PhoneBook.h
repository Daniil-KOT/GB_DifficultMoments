#pragma once

#include "Person.h"
#include "PhoneNumber.h"
#include <fstream>
#include <vector>
#include <tuple>
#include <algorithm>

//======================= EX.3 =======================

/*
*	�������� ����� PhoneBook, ������� ����� � ���������� ������� ����: 
*	������� � ����� ��������. ����������� ����� ������ ������ ��������� 
*	�������� ���� ifstream � ����� ������, ���������� �� �����. 
*	� ���� ������������ ���������� ���������� ������ �� ����� 
*	� ���������� ����������. 
*/
class PhoneBook
{
public:

	PhoneBook(std::ifstream& file);

	friend std::ostream& operator <<(std::ostream& out, const PhoneBook& pb);

	void SortByName();

	void SortByPhone();

	std::pair<std::string, PhoneNumber> GetPhoneNumber(std::string surname);

	void ChangePhoneNumber(const Person& person, const PhoneNumber& newNumber);

private:

	std::vector<std::pair<Person, PhoneNumber>> phoneBook_;
};

//====================================================