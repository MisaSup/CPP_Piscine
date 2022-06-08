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
        void fillFields();
    private:
        std::string get_user_input(std::string s);
};

#endif