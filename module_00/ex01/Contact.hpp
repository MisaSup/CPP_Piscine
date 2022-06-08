#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <ostream>

class Contact 
{
    private:
        std::string darkest_secret;
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string number;
        void fillFields()
        {
            first_name = get_user_input("Enter first name: ");
            last_name = get_user_input("Enter last name: ");
            nickname = get_user_input("Enter nickname: ");
            number = get_user_input("Enter number: ");
            darkest_secret = get_user_input("Enter your darkest secret: ");
        }
    private:
        std::string get_user_input(std::string s)
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
};

#endif