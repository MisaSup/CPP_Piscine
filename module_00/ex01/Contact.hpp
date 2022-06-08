#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <ostream>

class Contact 
{
    std::string darkest_secret;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string get_user_input(std::string s);
    public:
        void fillFields();
        std::string get_name();
        std::string get_surname();
        std::string get_nickname();
        std::string get_number();
};

#endif