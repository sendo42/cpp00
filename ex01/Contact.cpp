#include "Contact.hpp"



void Contact::AddContact(std::int8_t count)
{
    std::string FirstName, LastName, NickName, PhoneNumber, DarkestSecret;

    std::cout << "enter First Name" << std::endl;
    std::cin >>  FirstName;
    std::cout << "enter Last Name" << std::endl;		
    std::cin >>  LastName;
    std::cout << "enter Nick Name" << std::endl;
    std::cin >>  NickName;
    std::cout << "enter Phone Number" << std::endl;
    std::cin >>  PhoneNumber;
    while(1)
    {
        if(CheckInput(PhoneNumber) == true)
        {
            std::cout << "invalid input" << std::endl;
            std::cin >>  PhoneNumber;
        }
        else
        {
            break;
        }
    }
    std::cout << "enter your black history" << std::endl;
    std::cin >>  DarkestSecret;
    std::cout << "Done" << std::endl;

    this->SetContact(FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
    count++;
    count = count % 3;
}

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

/*
ShowでContactインスタンスの配列を全部出力したい。
しかし呼び方的には一つのオブジェクトしか出せない。
どうすれば他の配列のメモリを呼べるか
*/

void PrintHeader()
{
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
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
    PrintTenChar(NickName_);
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