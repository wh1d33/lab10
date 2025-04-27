#include "../include/Library.h"
#include <iostream>

int main() {
    Library lib;

    Book book1("1984", "George Orwell", 1949, "1234");
    Book book2("Brave New World", "Aldous Huxley", 1932, "5678");
    Book book3("Fahrenheit 451", "Ray Bradbury", 1953, "91011");

    lib.addBook(book1);
    lib.addBook(book2);
    lib.addBook(book3);

    std::cout << "All books:\n";
    lib.showAllBooks();

    std::cout << "\nSearching by title '1984':\n";
    lib.findBookByTitle("1984");

    std::cout << "\nSearching by author 'Ray Bradbury':\n";
    lib.findBookByAuthor("Ray Bradbury");

    std::cout << "\nRemoving book with ISBN 5678:\n";
    lib.removeBook("5678");

    std::cout << "\nAll books after removal:\n";
    lib.showAllBooks();

    system("pause");

    return 0;
}
