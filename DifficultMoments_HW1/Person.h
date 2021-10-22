#pragma once

#include <iostream>
#include <string>
#include <tuple>
#include <optional>

//======================= EX.1 =======================

/*
*	�������� ��������� Person � 3 ������: �������, ���, ��������.
*	���� �������� ������ ���� ������������� ����, �.�. �� � ���� ����� ���� ��������.
*	����������� �������� ������ ������ ��� ���� ���������.
*	����� ����������� ��������� < � == (����������� tie).
*/
struct Person
{

	Person(); 

	Person(const std::string surname, const std::string name, std::optional<std::string> patronymic);

	Person(const std::string surname, const std::string name);

	friend std::ostream& operator <<(std::ostream& out, const Person& person);

	friend bool operator == (const Person& lhs, const Person& rhs);

	friend bool operator <(const Person& lhs, const Person& rhs);

	std::string surname_;

	std::string name_;

	std::optional<std::string> patronymic_;
};

//====================================================
