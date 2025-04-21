#include <iostream>
#include "../include/Library.h"

int main() {
    Library lib;

    lib.addBook(Book("1984", "George Orwell", 1949, "1234567890"));
    lib.addBook(Book("To Kill a Mockingbird", "Harper Lee", 1960, "0987654321"));

    std::cout << "All books:\n";
    lib.displayBooks();

    std::cout << "\nSearch by author 'George':\n";
    lib.searchByAuthor("George");

    std::cout << "\nRemoving book with ISBN 1234567890\n";
    lib.removeBook("1234567890");

    std::cout << "\nAll books after removal:\n";
    lib.displayBooks();

    return 0;
}
