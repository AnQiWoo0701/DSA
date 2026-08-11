//Create a C++ program using a class named Book.
// The class should contain the following private data members which is Book ID, Book Title, Author Name, and Number of Copies. 
//The class should have a constructor to initialize these data members and a member function to display the book information. 
// In the main function, create an object of the Book class using the constructor and display the book information.

// Constructor: A default constructor that initializes all data members to default values. A parameterized constructor that accepts all book information.
// Array of Objects: Declare an array that can store information for 5 books. Initialize the array using the parameterized constructor.
// Pointer Operations:Create a pointer that points to the first object in the array and using the pointer arithmetic only (ptr + i and >- operator), display Book ID, Book Title, Author Name, and Number of Copies for all 5 books. and do not access objects using array indexing (books[i])in this section
// Search Book which allow the user to enter a Book ID and using the pointer search for the book. if found , display all the book information otherwise display Book not found.
//Update Copies: After a succesful seaech, ask the user to enter the number newlly arrived copies and update the number of copies using the pointer and display th updated book information.

#include <iostream>              // needed for cin/cout (input & output)
#include <string>                // needed to use the string data type
using namespace std;             // so we can write cout instead of std::cout

// ================= Book Class =================
class Book {
private:
    string bookID;                // stores the book's ID, e.g. "B101"
    string title;                 // stores the book's title
    string author;                // stores the author's name
    int copies;                   // stores how many copies are in stock

public:
    // ---- Part A: Default Constructor ----
    Book() {                      // runs automatically when a Book is made with no arguments
        bookID = "N/A";           // give bookID a default value
        title = "Unknown";        // give title a default value
        author = "Unknown";       // give author a default value
        copies = 0;                // give copies a default value
    }

    // ---- Part A: Parameterized Constructor ----
    Book(string id, string t, string a, int c) {   // runs when we pass in real values
        bookID = id;               // copy the passed-in id into bookID
        title = t;                  // copy the passed-in title into title
        author = a;                 // copy the passed-in author into author
        copies = c;                  // copy the passed-in copies into copies
    }

    // ---- Getters (needed for pointer access / searching) ----
    string getID() const {        // returns bookID, "const" means this function won't change the object
        return bookID;
    }

    string getTitle() const {     // returns title
        return title;
    }

    string getAuthor() const {    // returns author
        return author;
    }

    int getCopies() const {       // returns copies
        return copies;
    }

    // ---- Part E: Update copies ----
    void addCopies(int extra) {   // takes in the number of new copies to add
        copies += extra;          // same as: copies = copies + extra;
    }

    // ---- Display book information ----
    void display() const {                       // prints one book's full details
        cout << "Book ID: " << bookID << endl;   // print the ID, then go to a new line
        cout << "Title: " << title << endl;      // print the title
        cout << "Author: " << author << endl;    // print the author
        cout << "Copies: " << copies << endl;    // print the number of copies
    }
};

int main() {
    // ================= Part B: Array of Objects =================
    // Array of 5 books, each one created using the parameterized constructor
    Book books[5] = {
        Book("B101", "Data Structures", "Mark Allen", 8),      // books[0]
        Book("B102", "C++ Programming", "John Smith", 12),     // books[1]
        Book("B103", "Database Systems", "Peter Brown", 5),    // books[2]
        Book("B104", "Operating Systems", "Linda Tan", 9),     // books[3]
        Book("B105", "Computer Networks", "David Lee", 7)      // books[4]
    };

    // ================= Part C: Pointer Operations =================
    Book* ptr = books;            // ptr now points to books[0] (array name = address of first element)

    cout << "Library Books" << endl;     // print heading
    cout << "-------------" << endl;     // print a line under the heading

    // Display all books using pointer arithmetic only (ptr + i and ->)
    for (int i = 0; i < 5; i++) {                          // loop from i = 0 to i = 4 (5 books)
        cout << "Book ID: " << (ptr + i)->getID() << endl;       // (ptr+i) = address of book i, -> calls its getID()
        cout << "Title: " << (ptr + i)->getTitle() << endl;      // get and print the title of book i
        cout << "Author: " << (ptr + i)->getAuthor() << endl;    // get and print the author of book i
        cout << "Copies: " << (ptr + i)->getCopies() << endl;    // get and print the copies of book i
        cout << endl;                                             // blank line to separate books
    }

    // ================= Part D: Search Book =================
    string searchID;                          // will hold the ID typed in by the user
    cout << "Enter Book ID to search: ";      // ask the user for input
    cin >> searchID;                          // read the typed ID into searchID

    int foundIndex = -1;                      // -1 is a "flag" meaning nothing found yet

    for (int i = 0; i < 5; i++) {                          // check every book one by one
        if ((ptr + i)->getID() == searchID) {              // compare book i's ID with what user typed
            foundIndex = i;                                 // remember which index matched
            break;                                          // stop searching once found
        }
    }

    if (foundIndex == -1) {                   // if the flag never changed, nothing matched
        cout << "Book not found." << endl;    // tell the user
    } else {
        cout << endl << "Book Found" << endl;             // confirm the book was found
        (ptr + foundIndex)->display();                     // call display() on the matched book

        // ================= Part E: Update Copies =================
        int extraCopies;                                    // will hold the number of new copies typed in
        cout << endl << "Enter additional copies: ";       // ask the user for new stock count
        cin >> extraCopies;                                 // read the number into extraCopies

        (ptr + foundIndex)->addCopies(extraCopies);         // add extraCopies onto that book's copies

        cout << endl << "Updated Book Information" << endl;  // heading before showing updated info
        (ptr + foundIndex)->display();                        // show the book again with new copies count
    }

    return 0;                                  // tells the operating system the program ended successfully
}