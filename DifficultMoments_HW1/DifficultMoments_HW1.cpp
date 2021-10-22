#include "PhoneBook.h"

using namespace std;

/*
*	Имеется база сотрудников и номеров их телефонов.
*	Требуется написать соответствующие структуры для хранения данных, 
*	и заполнить контейнер записями из базы.
*	Затем необходимо реализовать методы обработки данных, 
*	а также вывести на экран всю необходимую информацию.
*/

int main()
{
	ifstream file("D:\\PhoneBook.txt", ios_base::in);

	PhoneBook pb(file);

	cout << pb << "\n\n";

	pb.SortByName();

	cout << "==================== SortByName() ====================\n\n";

	cout << pb << "\n\n";

	pb.SortByPhone();

	cout << "==================== SortByPhone() ====================\n\n";

	cout << pb << "\n\n";

	auto numberUpperCaseSurname = pb.GetPhoneNumber("ILIN");
	auto numberLowerCaseSurname = pb.GetPhoneNumber("ilin");
	auto numberCombinedSurname = pb.GetPhoneNumber("Ilin");
	auto numberNoMatch = pb.GetPhoneNumber("abcabcabc");

	cout << "==================== GetPhoneNumber() ====================\n\n";

	cout << numberUpperCaseSurname.first << " " << numberUpperCaseSurname.second << "\n\n";
	cout << numberLowerCaseSurname.first << " " << numberLowerCaseSurname.second << "\n\n";
	cout << numberCombinedSurname.first << " " << numberCombinedSurname.second << "\n\n";
	cout << numberNoMatch.first << " " << numberNoMatch.second << "\n\n";

	Person person("Ilin", "Petr", "Artemovich");

	PhoneNumber pn(1, 2, "345678", 12);

	pb.ChangePhoneNumber(person, pn);
	
	
	//	Ilin Petr Artemovich is going to be the 1st in a list.
	pb.SortByPhone();

	cout << "==================== ChangePhoneNumber() ====================\n\n";

	cout << pb << "\n\n";
}
