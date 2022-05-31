#ifndef BOOK_H
#define BOOK_H

#include "User.h"
using namespace std;
class Book
{
private:
    string title_;
    string isbn_;
    int id_; // Make sure that the id is incremental. First id is 1, second is 2 and so on
    string category_;

    // this variable should contain the average rating for the book, rateBook function
    // should update this attribute with the new average rating for the book
    double averageRating_;
    double sumRating_,numRating_;
    User author_;
public:
    static int count;
    Book();
    Book(string title, string isbn, string category);
    Book(const Book &book);
    void setTitle(string t);
    string getTitle();
    void setISBN(string I);
    string getISBN();
    void setId(int i);
    int getId();
    void setCategory(string c);
    string getCategory();
    void setAuthor(User user);
    User getAuthor();
    // this function should update averageRating attribute as a new rating is
    // introduced to the book so the average rating should be affected.
    // Check the main screenshot to know more information
    void rateBook(int rating);
    bool operator==(const Book& book);
    friend ostream& operator<<(ostream& output, const Book& book );
    friend istream& operator>>( istream& input, Book& book );

};
#endif // BOOK_H
