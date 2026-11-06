#include <iostream>
#include <string>
#pragma once

class Book
{
    public:
        Book(std::string title, std::string author, int year);
        bool borrowBook();
        bool isAvailable() const;
        void returnBook();
        std::string getTitle() const;
        void print() const;

    private:
        std::string title;
        std::string author;
        int year;
        bool available;
};