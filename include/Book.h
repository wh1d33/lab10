#pragma once
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;
    std::string isbn;

public:
    Book(std::string t, std::string a, int y, std::string i);
    
    // Геттери
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    std::string getISBN() const;

    // Сеттери
    void setTitle(const std::string& t);
    void setAuthor(const std::string& a);
    void setYear(int y);
    void setISBN(const std::string& i);

    bool operator==(const Book& other) const;
};
