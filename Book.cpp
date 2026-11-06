#include <iostream>
#include <string>
#include "Book.h"

Book::Book(std::string title, std::string author, int year) : title(title), author(author), year(year), available(true) {}

bool Book::borrowBook() {
    if (isAvailable()) {
        available = false;
        return true;
    }
    return false;
}

bool Book::isAvailable() const {
    return available;
}

void Book::returnBook() {
    available = true;
}

std::string Book::getTitle() const {
    return title;
}

void Book::print() const {
    std::cout << "Title: " << title << ", Author: " << author << ", Year: " << year << std::endl;
}
