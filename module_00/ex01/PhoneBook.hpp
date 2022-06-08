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
    int arr_length;
    public:
        PhoneBook();
        void start();
    private:
        void add();
        void search();
        std::string fit_string(std::string s);
        void prompt_contact();
};

#endif