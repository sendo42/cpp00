#ifndef  __PHONEBOOK_HPP__
#define  __PHONEBOOK_HPP__

#include <iostream>
#include "Contact.hpp"

class PhoneBook 
{
    private:
    	Contact Contacts[8];

    public:
        void AddContact(int count);
        void SearchContact(int count);

};

bool get_input(std::string& input);
bool CheckInput(std::string);
int num_input();
bool NoEmptyString(std::string& input);

#endif
