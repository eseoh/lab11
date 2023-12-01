//include headers and libraries
#include <iostream>
#include "Library.h"

using namespace std;
int main() {
    Library library;
    string command;

    while (true) {
        cout << "Enter command: ";
        cin >> command;

        if (command == "a") {
            string bookName;
            cin >> bookName;
            bool added = library.addBook(bookName);
            if (!added) {
                cout << "Cannot add the book." << endl;
            }
        } else if (command == "r") {
            string bookName;
            cin >> bookName;
            bool removed = library.removeBook(bookName);
            if (!removed) {
                cout << "Cannot remove the book." << endl;
            }
        } else if (command == "p") {
            library.print();
        } else if (command == "q") {
            break;
        }
    }

    cout << "Exiting" << endl;

    return 0;
}
    
    //ask for commands and execute


