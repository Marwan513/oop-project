#include "Book.h"

int Book::count = 0;

Book::Book() {
    count++;
    title_ = "none";
    isbn_ = "none";
    category_ = "none";
    author_ = User();
    id_ = count;
    averageRating_ = 0;
    sumRating_ = 0;
    numRating_ = 0;

}

Book::Book(string title, string isbn, string category) {
    count++;
    title_ = title_;
    isbn_ = isbn;
    category_ = category;
    id_ = count;
    averageRating_ = averageRating_;
    sumRating_ = 0;
    numRating_ = 0;
}

Book::Book(const Book& book) {
    title_ = book.title_;
    isbn_ = book.isbn_;
    category_ = book.category_;
    id_ = book.id_;
    averageRating_ = book.averageRating_;
    author_ = book.author_;
    sumRating_ = book.sumRating_;
    numRating_ = book.numRating_;
}

void Book:: setTitle(string t) { title_ = t; }

string Book::getTitle() { return title_; }

void Book::setISBN(string I) { isbn_ = I; }

string Book::getISBN() { return isbn_; }

void Book::setId(int i) { id_ = i; }

int Book::getId() { return id_; }

void Book::setCategory(string c) { category_ = c; }

string Book::getCategory() { return category_; }

void Book::setAuthor(User user) { author_ = user; }

User Book::getAuthor() { return author_; }


void Book::rateBook(int rating) {
    sumRating_ += rating;
    numRating_++;
    averageRating_ = sumRating_/numRating_;
}

bool Book::operator==(const Book& book) {
    return (title_ == book.title_ && isbn_ == book.isbn_ && category_ == book.category_);
}

ostream &operator<<(ostream& output, const Book& book) {
    cout <<"========Book "<<book.id_<<" ========"<<endl;
    output << "Title: " << book.title_ << "|ISBN: " << book.isbn_ << "|Id: " << book.id_ << "|Category: " << book.category_ <<"|Avg Rating: " <<book.averageRating_<<endl;
    cout <<"==========================================\n"<<endl;
    return output;
}

istream &operator>>(istream& input, Book& book) {
    cout<<"Enter the book information in this order\nTitle ISBN Category (Space separated)"<<endl;
    input >> book.title_ >> book.isbn_ >> book.category_;
    return input;
}
