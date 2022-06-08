#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    Contact user;
    PhoneBook first;

    // user.fillFields();

    std::cout << user.nickname;
    first.start();
    return 0;
}
