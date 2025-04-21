#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;
    std::string isbn;

public:
    Book(std::string title, std::string author, int year, std::string isbn);

    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    std::string getISBN() const;

    void setTitle(const std::string& newTitle);
    void setAuthor(const std::string& newAuthor);
    void setYear(int newYear);
    void setISBN(const std::string& newISBN);

    bool operator==(const Book& other) const;
};

#endif
