#pragma once

#include "Person.h"
#include "PhoneNumber.h"
#include <fstream>
#include <vector>
#include <tuple>
#include <algorithm>

//======================= EX.3 =======================

/*
*	Создайте класс PhoneBook, который будет в контейнере хранить пары: 
*	Человек – Номер телефона. Конструктор этого класса должен принимать 
*	параметр типа ifstream – поток данных, полученных из файла. 
*	В теле конструктора происходит считывание данных из файла 
*	и заполнение контейнера. 
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