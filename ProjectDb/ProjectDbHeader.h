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
   /* PaperBook(): Book(){
        Book();
    }
    friend ostream& operator<<(ostream &out,const PaperBook &b);*/
};

class HardBack{
};

class Magazines{
};

class Advertisement{
};

class Advertiser{
};

class Company{
};

class PhysicalPerson{
};

class Person{
};

#endif // PROJECTDBHEADER_H_INCLUDED
