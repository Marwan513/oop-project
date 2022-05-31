#ifndef USER_H
#define USER_H
#include<cstring>
#include<iostream>

using namespace std;

class User
{
private:
    string name_;
    int age_;
    int id_;
    string password_;
    string email_;
public:
    static int count;
    User();
    User(string name, int age, string email, string password);
    User(const User &user);
    bool operator==(const User &user);
    void setName(string n);
    string getName() const;
    void setPassword(string p);
    string getPassword();
    void setEmail(string e);
    string getEmail();
    void setAge(int a);
    int getAge();
    void setId(int i);
    int getId();
    friend ostream &operator<<(ostream &output, const User&user );
    friend istream &operator>>( istream &input, User&user );
};
#endif // USER_H


