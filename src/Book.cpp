#include "../include/Book.h"

Book::Book(std::string t, std::string a, int y, std::string i)
    : title(t), author(a), year(y), isbn(i) {}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}

std::string Book::getISBN() const {
    return isbn;
}

void Book::setTitle(const std::string& t) {
    title = t;
}

void Book::setAuthor(const std::string& a) {
    author = a;
}

void Book::setYear(int y) {
    year = y;
}

void Book::setISBN(const std::string& i) {
    isbn = i;
}

bool Book::operator==(const Book& other) const {
    return isbn == other.isbn; // Порівнюємо книги за ISBN
}
