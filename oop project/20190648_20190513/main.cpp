#include <iostream>
#include "Book.h"
// Author : Marwan_Mohamed Youssef_Hesham
// Purpose : to make a simple library online managment system




int main(){
    cout << "Let's add a user\n";
    User user1;
    cin >> user1;
    cout << user1;
    cout << "Let's add another user\n";
    User user2;
    cin >> user2;
    if (user1 == user2){cout << user1;}
    else{cout << user2;}
    cout << "Let's add a book\n";
    Book book1;
    cin >> book1;
    cout << book1;
    cout << "Let's add another book\n";
    Book book2;
    cin >> book2;
    if (book1 == book2){cout << book1;}
    else{cout << book2;}
    cout << "Let's assign an author for the first book, setting user 1 as an author\n";
    book1.setAuthor(user1);
    cout << "Let's rate the first book with 3 and 4 ratings and print the book info\n";
    book1.rateBook(3);
    book1.rateBook(4);
    cout << book1 ;
    cout << "\n==========================================\n\n";
    cout << "Let's add a new rating for b1 with 5 and print the book info\n";
    book1.rateBook(5);
    cout << book1 ;
    cout << "\n==========================================\n\n";

    return 0;
}
