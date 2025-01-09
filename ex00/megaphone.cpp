#include <iostream>
#include <string>

bool IsUpperCase(char c)
{
    if(c >= 65 && c <= 90)
	return true;
    else
	return false;
} 

std::string TurnUpperStr(std::string str)
{
    int length;

    length = str.length();
    for(int i = 0; i < length; i++)
    {
	if(IsUpperCase(str[i]) == false)
	    str[i] = std::toupper(str[i]); 
    }
    return str;
}

int main(int ac, char **av)
{
    std::string str;
    
    if(ac == 1)
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
	{
	    str.append(av[i]);
	}
	std::cout << TurnUpperStr(str) << std::endl;
    }
    return 0;
}
