#include <iostream>
#include <gtest/gtest.h>
#include "d:\code\Geekbrains\DifficultMoments\DifficultMoments_HW1\DifficultMoments_HW1\PhoneBook.h"

std::ifstream file1("D:/PhoneBook.txt");
std::ifstream file2("D:/PhoneBook.txt");
PhoneBook pb1(file1);
PhoneBook pb2(file2);

TEST(equal, phone_number1)
{
	auto val1 = pb1.GetPhoneNumber("Ilin");
	auto val2 = pb1.GetPhoneNumber("Ilin");
	ASSERT_EQ(val1.second, val2.second);
}

TEST(equal, phone_number2)
{
	auto val1 = pb2.GetPhoneNumber("Ilin");
	auto val2 = pb2.GetPhoneNumber("Ilin");
	ASSERT_EQ(val1.second, val2.second);
}

TEST(equal, phone_number_1_2)
{
	auto val1 = pb1.GetPhoneNumber("Ilin");
	auto val2 = pb2.GetPhoneNumber("Ilin");
	ASSERT_EQ(val1.second, val2.second);
}

TEST(equal, sort_by_name)
{
	pb1.SortByName();
	pb2.SortByName();
	ASSERT_EQ(pb1, pb2);
}

TEST(not_equal, sort_by_name)
{
	pb1.SortByName();
	pb2.SortByName();
	ASSERT_NE(pb1, pb2);
}

TEST(not_equal, sort_by_name_n_sort_by_phone)
{
	pb1.SortByName();
	pb2.SortByPhone();
	ASSERT_NE(pb1, pb2);
}

TEST(true_, phone_number1)
{
	ASSERT_TRUE(pb1.GetPhoneNumber("Ilin").second == PhoneNumber(7, 17, "4559767"));
}

TEST(true_, phone_number2)
{
	ASSERT_TRUE(pb2.GetPhoneNumber("Ilin").second == PhoneNumber(7, 17, "4559767"));
}

TEST(true_, string_message1)
{
	ASSERT_TRUE(pb1.GetPhoneNumber("Ilin").first == "Found more than one");
}

TEST(true_, string_message2)
{
	ASSERT_TRUE(pb2.GetPhoneNumber("Zaitsev").first == "");
}

TEST(string_equal, name1_2)
{
	ASSERT_STREQ(pb1.GetPhoneNumber("Ilin").first.c_str(),
		pb2.GetPhoneNumber("Ilin").first.c_str());
}

TEST(string_equal_ignore_case, name1_2)
{
	ASSERT_STRCASEEQ(pb1.GetPhoneNumber("Ilin").first.c_str(),
		pb2.GetPhoneNumber("Ilin").first.c_str());
}

int main()
{
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
