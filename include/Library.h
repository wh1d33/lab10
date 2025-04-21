#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void removeBook(const std::string& isbn);
    void displayBooks() const;
    void searchByTitle(const std::string& title) const;
    void searchByAuthor(const std::string& author) const;
};

#endif
