#include "./Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    Contact user;
    PhoneBook first;

    // user.fillFields();

    std::cout << user.nickname;
    first.add();
    first.add();
    first.search();
    return 0;
}
