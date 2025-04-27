#include "../include/Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::removeBook(const std::string& isbn) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getISBN() == isbn) {
            books.erase(it);
            std::cout << "Book with ISBN " << isbn << " removed.\n";
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not found.\n";
}

void Library::showAllBooks() const {
    if (books.empty()) {
        std::cout << "No books in the library.\n";
        return;
    }
    for (const auto& book : books) {
        std::cout << "Title: " << book.getTitle() 
                  << ", Author: " << book.getAuthor()
                  << ", Year: " << book.getYear()
                  << ", ISBN: " << book.getISBN() << "\n";
    }
}

void Library::findBookByTitle(const std::string& title) const {
    bool found = false;
    for (const auto& book : books) {
        if (book.getTitle() == title) {
            std::cout << "Found book: " << book.getTitle() 
                      << " by " << book.getAuthor() << "\n";
            found = true;
        }
    }
    if (!found) {
        std::cout << "No book found with title: " << title << "\n";
    }
}

void Library::findBookByAuthor(const std::string& author) const {
    bool found = false;
    for (const auto& book : books) {
        if (book.getAuthor() == author) {
            std::cout << "Found book: " << book.getTitle()
                      << " by " << book.getAuthor() << "\n";
            found = true;
        }
    }
    if (!found) {
        std::cout << "No books found by author: " << author << "\n";
    }
}
