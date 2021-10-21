#pragma once

#include <iostream>
#include <string>
#include <optional>

//======================= EX.2 =======================

/*
*	�������� ��������� PhoneNumber � 4 ������:
*	�         ��� ������ (����� �����)
*	�         ��� ������ (����� �����)
*	�         ����� (������)
*	�         ���������� ����� (����� �����, ������������ ���)
*	��� ���� ��������� ����������� �������� ������. 
*	����������, ����� ����� �������� ��������� � �������: 
*	+7(911)1234567 12, ��� 7 � ��� ����� ������, 911 � ����� ������, 
*	1234567 � �����, 12 � ���������� �����. 
*	���� ����������� ������ ���, �� ��� �������� �� ����.
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