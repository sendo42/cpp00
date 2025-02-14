#include "Contact.hpp"
#include "PhoneBook.hpp"


void Contact::SetContact (std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret)
{
	FirstName_ = FirstName;
	LastName_ = LastName;
	NickName_ = NickName;
	PhoneNumber_ = PhoneNumber;
	DarkestSecret_ = DarkestSecret;
}

void PrintTenChar(std::string Name)
{
    int i = 0;
    int length;

    length = Name.length();
    if(length == 0)
    {
        std::cout << "          ";
    }
    else if(length < 10)
    {
        for(int i = 0; i + length < 10; i++)
            std::cout << " ";
        std::cout << Name;
    }
    else
    {
        while(i < 9)
        {
            std::cout << Name[i];
            i++;
        }
        std::cout << ".";
    }
}

void PrintHeader()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

}

void PrintGuide()
{
	std::cout << "type ADD or SEARCH or EXIT" << std::endl;
	std::cout << "\033[32mphonebook % \033[m";
}

void Contact::ShowLineContact(int s_count)
{
    std::cout << "|";
    std::cout << "         " << s_count;
    std::cout << "|";
    PrintTenChar(FirstName_);
    std::cout << "|";
    PrintTenChar(LastName_);
    std::cout << "|";
    PrintTenChar(NickName_);
    std::cout << "|" << std::endl;
}

void Contact::ShowAllContent(int count)
{
    PrintHeader();
    std::cout << "|";
    std::cout << "         " << count;
    std::cout << "|";
    PrintTenChar(FirstName_);
    std::cout << "|";
    PrintTenChar(LastName_);
    std::cout << "|";
    std::cout << NickName_;
    std::cout << "|" << std::endl;
}

bool CheckInput(std::string PhoneNumber)
{
    int i = 0;
    int num;

    num = PhoneNumber.length();
    while(i < num)
    {
        if(PhoneNumber[i] < '0' || PhoneNumber[i] > '9')
        {
            std::cout << "Don`t Check !!" << std::endl;
            return true;
        }
        i++;
    }
    return false;
}