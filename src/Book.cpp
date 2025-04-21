#include "../include/Book.h"
#include <iostream>

Book::Book(std::string title, std::string author, int year, std::string isbn)
    : title(title), author(author), year(year), isbn(isbn) {}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
int Book::getYear() const { return year; }
std::string Book::getISBN() const { return isbn; }

void Book::setTitle(const std::string& newTitle) { title = newTitle; }
void Book::setAuthor(const std::string& newAuthor) { author = newAuthor; }
void Book::setYear(int newYear) { year = newYear; }
void Book::setISBN(const std::string& newISBN) { isbn = newISBN; }

bool Book::operator==(const Book& other) const {
    return isbn == other.isbn;
}
