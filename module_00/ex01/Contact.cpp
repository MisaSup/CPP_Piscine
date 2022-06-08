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