#ifndef PROJECTDBHEADER_H_INCLUDED
#define PROJECTDBHEADER_H_INCLUDED
#include <string>
#include <iostream>
#include <vector>

using namespace std;

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
    PaperBook();
    /*DESTRUCTOR*/
    ~PaperBook();
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,PaperBook &b);

private:
    /*ATTRIBUTE*/
};

class HardBack : public Book{
public:
    /*CONSTRUCTOR*/
    HardBack();
    /*DESTRUCTOR*/
    ~HardBack();
    /*GETTER*/
    float getWeight();
    /*SETTER*/
    void setWeight(float amount);
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,HardBack &hb);

private:
    /*ATTRIBUTE*/
    float weight;
};

class Advertisement{
public:
    /*CONSTRUCTOR*/
    Advertisement();
    /*DESTRUCTOR*/
    ~Advertisement();
    /*GETTER*/
    string getTitle();
    string getAdvertiserId();
    /*SETTER*/
    void setTitle(string advertisementTitle);
    void setAdvertiserId(string id);
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Advertisement &a);

private:
    /*ATTRIBUTE*/
    string title;
    string advertiserId;
};

class Magazines : public Book{
public:
    /*CONSTRUCTOR*/
    Magazines();
    /*DESTRUCTOR*/
    ~Magazines();
    /*GETTER*/
    vector<Advertisement> getArrArdv();
    /*SETTER*/
    /*OTHER*/
    //Add del insert find
    void addElement();
    void delElement();
    void findElement();
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,Magazines &m);

private:
    /*ATTRIBUTE*/
    vector<Advertisement> arrArdv;
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

class Company : public Person{
public:
    /*CONSTRUCTOR*/
    Company();
    /*DESTRUCTOR*/
    ~Company();
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,Company &c);

private:
    /*ATTRIBUTE*/
};

class PhysicalPerson : public Person{
public:
    /*CONSTRUCTOR*/
    PhysicalPerson();
    /*DESTRUCTOR*/
    ~PhysicalPerson();
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,PhysicalPerson &pp);

private:
    /*ATTRIBUTE*/
};

class Advertiser{
public:
    /*CONSTRUCTOR*/
    Advertiser();
    /*DESTRUCTOR*/
    ~Advertiser();
    /*GETTER*/
    Person getPerson();
    string getId();
    /*SETTER*/
    void setPerson(Person Advi_person);
    void setId(string advi_id);
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,const Advertiser &a);

private:
    /*ATTRIBUTE*/
    Person person;
    string id;
};

class Publisher{
public:
    /*CONSTRUCTOR*/
    Publisher();
    /*DESTRUCTOR*/
    ~Publisher();
    /*GETTER*/
    vector<Person> getListPerson();
    vector<Book> getListBook();
    /*SETTER*/
    /*OTHER*/
    void loadData();
    void displayWeightBook();
    void displayMagazine();
    void displayHardback();
    void displayAdvertiser();
    void displayPaperbook();
    void displayMagazineInfo();
    void searchWord(string word);
    void addMagazine(Magazines mag);
    void removeMagazine(string id);
    void removeBook(string id);
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,Publisher &p);

private:
    /*ATTRIBUTE*/
    vector<Person> listPerson;
    vector<Book> listBook;
    vector<Advertiser> listAdvertiser;
    /*OTHER*/
    void loadDataPaperBook();
    void loadDataHardBackBook();
    void loadDataMagazine();
    void loadDataCompany();
    void loadDataPhysicalPerson();
    void loadDataAdvertiser();
    void loadDataAdvertisement();
    void addBook(Book b);
    void addPerson(Person p);
    void addAdvertiser(Advertiser a);
    void setAdvertiser();
    vector<string> split(string text);
    Person test(string id);
};
#endif // PROJECTDBHEADER_H_INCLUDED
