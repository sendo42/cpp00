#include "Contact.hpp"
#include "PhoneBook.hpp"

int num_input()
{
	std::string c_index;
	int num;

	while(std::cin >> c_index)
	{
		if(!CheckInput(c_index))
			break ;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(),'\n');
		std::cout << "need numeric type" << std::endl;
	}
	num = std::stoi(c_index);
	return num;
}

int main()
{
	PhoneBook list;
	std::string command;
	int count = 0;
	int c_index;

	while(std::cin >> command && std::cin.ignore(std::numeric_limits<int>::max(),'\n'))
	{
		if(command == "ADD")
		{
			list.Contacts[count].AddContact(count);
			count++;
			count = count % 8;
		}
		else if(command == "SEARCH")
		{
			PrintHeader();
			for(int i = 0; i < 8; i++)
				list.Contacts[i].ShowLineContact(i);
			c_index = num_input();
			if(c_index < count)
				list.Contacts[c_index].ShowAllContent(c_index);
			else
				std::cout << "no such index" <<std::endl;
		}
		else if(command == "EXIT")
			break;
		else
			std::cout << "command not found" << std::endl;
	}
}




// int main()
// {
//     std::string command;
//     PhoneBook list;
// 	std::string FirstName, LastName, NickName, PhoneNumber, DarkestSecret;
// 	int count = 0;

//     while(1)
//     {
// 		std::cin >> command;
// 		if(command == "EXIT")
// 		{
// 			std::cout << "goodbye" << std::endl;
// 			break;
// 		}
// 		else if(command == "ADD")
// 		{
// 			std::cout << "enter First Name" << std::endl;
// 			std::cin >>  FirstName;
// 			std::cout << "enter Last Name" << std::endl;		
// 			std::cin >>  LastName;
// 			std::cout << "enter Nick Name" << std::endl;
// 			std::cin >>  NickName;
// 			std::cout << "enter Phone Number" << std::endl;
// 			std::cin >>  PhoneNumber;
// 			while(1)
// 			{
// 				if(CheckInput(PhoneNumber) == true)
// 				{
// 					std::cout << "invalid input" << std::endl;
// 					std::cin >>  PhoneNumber;
// 				}
// 				else
// 				{
// 					break;
// 				}
// 			}
// 			std::cout << "enter your black history" << std::endl;
// 			std::cin >>  DarkestSecret;
// 			std::cout << "Done" << std::endl;

// 			list.Contacts[count].SetContact(FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
// 			count++;
// 			count = count % 3;
// 		}
// 		else if(command == "SEARCH")
// 		{
// 			int i;

// 			i = 0;

// 			int num;
// 			std::cin >> num;
// 			if(num > count)
// 			{
// 				std::cout << "Nooo" << std::endl;
// 			}
// 			else
// 				list.Contacts[num].ShowContact();
// 		}
// 		else
// 		{
// 			std::cout << "commnd not found" << std::endl;
// 		}
//     }
//     return 0;
// }	
