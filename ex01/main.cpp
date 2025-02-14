#include "Contact.hpp"
#include "PhoneBook.hpp"


bool get_input(std::string& input)
{
	std::getline(std::cin, input);
	if(std::cin.fail() || std::cin.bad())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max());
		return false;
	}
	return true;
}

int num_input()
{
	std::string c_index;
	int num;

	while(get_input(c_index))
	{
		if(!CheckInput(c_index))
			break ;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max());
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

	PrintGuide();
	while(get_input(command))
	{
		if(command == "ADD")
		{
			list.AddContact(count);
			count++;
			count = count % 8;
		}
		else if(command == "SEARCH")
		{
			PrintHeader();

		}
		else if(command == "EXIT")
			break;
		else if(!command.empty())
			std::cout << "command not found: " << command << std::endl;
		std::cout << "\033[32mphonebook % \033[m";
	}
}



