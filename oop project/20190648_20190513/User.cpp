#include"User.h"

int User::count = 0;
User::User() {                                                            // Default constructor with no parameters for initializing a null value for all User parameters
    count++;
    name_ = "none";
    password_ = "none";
    email_ = "none";
    age_ = 0;
    id_ = count;
}
User::User(string name, int age, string email, string password) {           // parametrized constructor with 4 parameters for reading their true values
    count++;
    name = name;
    age = age;
    email = email;
    password = password;
    id_ = count;
}
void User::setName(string n) { name_ = n; }

string User:: getName() const { return name_; }

void User:: setPassword(string p) { password_ = p; }

string User:: getPassword() { return password_; }

void User::setEmail(string e) { email_ = e; }

string User::getEmail() { return email_; }

void User::setAge(int a) { age_ = a; }

int User::getAge() { return age_; }

void User::setId(int i) { id_ = i; }

int User::getId() { return id_; }

User::User(const User& user) {                                                                             // copy constructor for assigning objects and modifying new values
    name_ = user.name_;
    id_ = user.id_;
    password_ = user.password_;
    email_ = user.email_;
    age_ = user.age_;
}

bool User::operator==(const User& user) {                                                                       // operator overloading for checking if user1 is equal to user2
    return (name_ == user.name_ && age_ == user.age_ && password_ == user.password_ && email_ == user.email_);
}

ostream& operator<<(ostream& output, const User& user) {
    cout <<"========User "<<user.id_<<" ========"<<endl;
    output << "Name: " << user.name_ << "|Age: " << user.age_ << "|Id: " << user.id_ << "|Email: " << user.email_<<endl;
    cout <<"==========================================\n"<<endl;
    return output;
}

istream& operator>>(istream &input, User& user) {
    cout<<"Enter the user information in this order\nName Age Email Password (Space separated)"<<endl;
    input >> user.name_ >> user.age_ >> user.email_ >> user.password_;
    return input;
}

