#ifndef PROJECTDBHEADER_H_INCLUDED
#define PROJECTDBHEADER_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

class Publisher{
};

class Book{
public:
    /*CONSTRUCTOR*/
    Book();
    /*DESTRUCTOR*/
    ~Book();
    /*GETTER*/
    string getId();
    string getTitle();
    int getNbPage();
    string getBookContent();
    /*SETTER*/
    void setId(string Book_id);
    void setTitle(string Book_title);
    void setNbPage(int Book_nbPage);
    void setBookContent(string Book_bookContent);
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Book &b);

private:
    /*ATTRIBUTE*/
    string id;
    string title;
    int nbPage;
    string bookContent;
};

class PaperBook : public Book{
public:
    /*CONSTRUCTOR*/
    /*DESTRUCTOR*/
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Book &b);

private:
    /*ATTRIBUTE*/
   /* PaperBook(): Book(){
        Book();
    }
    friend ostream& operator<<(ostream &out,const PaperBook &b);*/
};

class HardBack{
public:
    /*CONSTRUCTOR*/
    /*DESTRUCTOR*/
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Book &b);

private:
    /*ATTRIBUTE*/
};

class Magazines{
public:
    /*CONSTRUCTOR*/
    /*DESTRUCTOR*/
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Book &b);

private:
    /*ATTRIBUTE*/
};

class Advertisement{
public:
    /*CONSTRUCTOR*/
    /*DESTRUCTOR*/
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Book &b);

private:
    /*ATTRIBUTE*/
};

class Advertiser{
public:
    /*CONSTRUCTOR*/
    /*DESTRUCTOR*/
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Book &b);

private:
    /*ATTRIBUTE*/
};

class Company{
public:
    /*CONSTRUCTOR*/
    /*DESTRUCTOR*/
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Book &b);

private:
    /*ATTRIBUTE*/
};

class PhysicalPerson{
public:
    /*CONSTRUCTOR*/
    /*DESTRUCTOR*/
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Book &b);

private:
    /*ATTRIBUTE*/
};

class Person{
public:
    /*CONSTRUCTOR*/
    Person();
    /*DESTRUCTOR*/
    ~Person();
    /*GETTER*/
    string getId();
    string getName();
    /*SETTER*/
    void setId(string Person_id);
    void setName(string Person_name);
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Person &p);

private:
    /*ATTRIBUTE*/
    string name;
    string id;
};

#endif // PROJECTDBHEADER_H_INCLUDED
