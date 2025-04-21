#include "../include/Book.h"
#include <iostream>
#include <algorithm>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::removeBook(const std::string& isbn) {
    books.erase(std::remove_if(books.begin(), books.end(),
        [&isbn](const Book& b) { return b.getISBN() == isbn; }), books.end());
}

void Library::displayBooks() const {
    for (const auto& book : books) {
        std::cout << book.getTitle() << " by " << book.getAuthor()
                  << " (" << book.getYear() << ") - ISBN: " << book.getISBN() << "\n";
    }
}

void Library::searchByTitle(const std::string& title) const {
    for (const auto& book : books) {
        if (book.getTitle().find(title) != std::string::npos) {
            std::cout << book.getTitle() << " - " << book.getAuthor() << "\n";
        }
    }
}

void Library::searchByAuthor(const std::string& author) const {
    for (const auto& book : books) {
        if (book.getAuthor().find(author) != std::string::npos) {
            std::cout << book.getTitle() << " - " << book.getAuthor() << "\n";
        }
    }
}
