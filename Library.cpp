//include headers and libraries
#include <iostream>
#include "Library.h"

Library::Library() {
    for (int i = 0; i < 10; i++) {
        books[i] = "";
    }
}

bool Library::addBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            return false; // Book already exists
        }
    }

    for (int i = 0; i < 10; i++) {
        if (books[i] == "") {
            books[i] = bookName;
            return true; // Book added successfully
        }
    }

    return false; // Library is full
}

bool Library::removeBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) {
            books[i] = "";
            return true; // Book removed successfully
        }
    }

    return false; // Book not found
}

void Library::print() {
    cout << "Library contents:" << endl;
    for (int i = 0; i < 10; i++) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}
//implement class functions
