#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>

class PhoneBook
{
    Contact contacts_arr[8];
    int next_cell;
    public:
        PhoneBook()
        {
            next_cell = 0;
        }
        void add()
        {
            if (next_cell == 8)
                next_cell = 0;
            contacts_arr[next_cell].fillFields();
            next_cell++;
        }
        void search()
        {
            int i;

            for (i = 0; i < next_cell; i++)
            {
                std::cout << std::setw(10) << i << " | ";
                std::cout << std::setw(10) << fit_string(contacts_arr[i].first_name) << " | ";
                std::cout << std::setw(10) << fit_string(contacts_arr[i].last_name) << " | ";
                std::cout << std::setw(10) << fit_string(contacts_arr[i].nickname) << " | " << std::endl;
            }
        }
    private:
        std::string fit_string(std::string s)
        {
            std::string value;

            value = s;
            if (s.length() > 10)
            {
                value = s.substr(0, 10);
                value.replace(9, 1, ".");
            }
            return value;
        }
};

#endif