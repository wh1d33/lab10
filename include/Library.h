#pragma once
#include "Book.h"
#include <vector>

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void removeBook(const std::string& isbn);
    void showAllBooks() const;
    void findBookByTitle(const std::string& title) const;
    void findBookByAuthor(const std::string& author) const;
};
