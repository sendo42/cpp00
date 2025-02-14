#include "PhoneBook.hpp"


void PhoneBook::AddContact(int count)
{
    std::string FirstName, LastName, NickName, PhoneNumber, DarkestSecret;

    std::cout << "enter First Name" << std::endl;
    std::cout << ">> ";
    NoEmptyString(FirstName);
    std::cout << "enter Last Name" << std::endl;		
    std::cout << ">> ";
    NoEmptyString(LastName);
    std::cout << "enter Nick Name" << std::endl;
    std::cout << ">> ";
    NoEmptyString(NickName);
    std::cout << "enter Phone Number" << std::endl;
    std::cout << ">> ";
    while(NoEmptyString(PhoneNumber))
    {
        if(CheckInput(PhoneNumber) == true)
            std::cout << "invalid input" << std::endl;
        else
            break ;
        std::cout << ">>";
    }
    std::cout << "enter your black history" << std::endl;
    std::cout << ">> ";
    NoEmptyString(DarkestSecret);
    std::cout << "Done" << std::endl;

    this->Contacts[count].SetContact(FirstName, LastName, NickName, PhoneNumber, DarkestSecret);
}


void PhoneBook::SearchContact(int count)
{
    int c_index;

    for(int i = 0; i < count; i++)
        this->Contacts[i].ShowLineContact(i);
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "choose index" << std::endl;
    c_index = num_input();
    if(c_index < count)
        this->Contacts[c_index].ShowAllContent(c_index);
    else
        std::cout << "no such index" <<std::endl;

}

