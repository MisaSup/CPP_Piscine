#include "PhoneBook.hpp"
#include <iostream>
#include <ostream>
#include <string>

PhoneBook::PhoneBook()
{
    next_cell = 0;
    arr_length = 0;
}

void PhoneBook::add()
{
    if (next_cell == 8)
        next_cell = 0;
    contacts_arr[next_cell].fillFields();
    next_cell++;
}

void PhoneBook::search()
{
    int i;

    for (i = 0; i < 8; i++)
    {
        std::cout << std::setw(10) << i << " | ";
        std::cout << std::setw(10) << fit_string(contacts_arr[i].first_name) << " | ";
        std::cout << std::setw(10) << fit_string(contacts_arr[i].last_name) << " | ";
        std::cout << std::setw(10) << fit_string(contacts_arr[i].nickname) << " | " << std::endl;
    }
    prompt_contact();
}

std::string PhoneBook::fit_string(std::string s)
{
    if (s.length() > 10)
    {
        s = s.substr(0, 10);
        s.replace(9, 1, ".");
    }
    return s;
}

void PhoneBook::prompt_contact()
{
    int index;

    std::cout << "Choose contact: " << std::endl;
    std::cin >> index;
    if (index > -1 && index < next_cell)
    {
        std::cout << "Name: " << contacts_arr[index].first_name << std::endl;
        std::cout << "Surname: " << contacts_arr[index].last_name << std::endl;
        std::cout << "Nickname: " << contacts_arr[index].nickname << std::endl;
        std::cout << "Number: " << contacts_arr[index].number << std::endl;
    }
    else
        std::cout << "This contact havent exist yet" << std::endl;
}

void PhoneBook::start()
{
    std::string prompt;

    while (1) {
        std::cout << "\nIts a crappy phone book!\nWaitin for followin commands: ADD, SEARCH, EXIT" << std::endl;
        std::cin >> prompt;
        if (prompt.compare("ADD") == 0 || prompt.compare("add") == 0)
            add();
        else if (prompt.compare("SEARCH") == 0 || prompt.compare("search") == 0)
            search();
        else if (prompt.compare("EXIT") == 0 || prompt.compare("exit") == 0)
            return ;
        else 
            std::cout << "Wrong command!" << std::endl;
    }
}