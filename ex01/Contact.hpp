#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <string>
#include <iostream>

class Contact
{
    public:
		void SetContact (std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret);
		void ShowAllContact();
		void ShowAllContent(int count);
		void ShowLineContact(int s_count);

	Contact()
	{
	};
	
	~Contact()
	{
	};

    private:
		std::string FirstName_;
		std::string LastName_;
		std::string NickName_;
		std::string PhoneNumber_;
		std::string DarkestSecret_;	
};

bool CheckInput(std::string PhoneNumber);
void PrintHeader();
void PrintGuide();
bool get_input(std::string& input);


#endif