#include "Contact.hpp"

void Contact::fillFields()
{
    first_name = get_user_input("Enter first name: ");
    last_name = get_user_input("Enter last name: ");
    nickname = get_user_input("Enter nickname: ");
    number = get_user_input("Enter number: ");
    darkest_secret = get_user_input("Enter your darkest secret: ");
}

std::string Contact::get_user_input(std::string s)
{
    std::string value;
    
    do 
    {
        std::cout << s << std::endl;
        std::cin >> value;
    }
    while (value.empty());
    return (value);
}

std::string Contact::get_name()
{
    return (first_name);
}

std::string Contact::get_surname()
{
    return (last_name);
}

std::string Contact::get_nickname()
{
    return (nickname);
}

std::string Contact::get_number()
{
    return (number);
}