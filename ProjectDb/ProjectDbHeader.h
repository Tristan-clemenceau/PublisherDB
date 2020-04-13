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

class PaperBack : public Book{
public:
    /*CONSTRUCTOR*/
    PaperBack();
    /*DESTRUCTOR*/
    ~PaperBack();
    /*GETTER*/
    /*SETTER*/
    /*OTHER*/
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,PaperBack &b);

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
    void addElement(Advertisement a);
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
    int getNbPerson();
    int getNbBook();
    /*SETTER*/
    /*OTHER*/
    void loadData();
    void displayWeightBook();
    void displayMagazine();
    void displayHardback();
    void displayAdvertiser();
    void displayPaperBackbook();
    void displayMagazineInfo();
    void searchWord(string word);
    void addMagazine(Magazines mag);
    void removeMagazine(string id);
    void removeBook(string id);
    /*OBJECT METHOD*/
    friend ostream& operator<<(ostream &out,Publisher &p);

private:
    /*ATTRIBUTE*/
    vector<PaperBack> listPaperBackBook;
    vector<HardBack> listHardBack;
    vector<Magazines> listMagazines;
    vector<Company> listCompany;
    vector<PhysicalPerson> listPhysicalPerson;
    vector<Advertiser> listAdvertiser;
    vector<Advertisement> listAdvertisement;
    /*OTHER*/
    void loadDataPaperBook();
    void loadDataHardBackBook();
    void loadDataMagazine();
    void loadDataCompany();
    void loadDataPhysicalPerson();
    void loadDataAdvertiser();
    void loadDataAdvertisement();
    void addPaperBackBook(PaperBack p);
    void addHarback(HardBack h);
    void addCompany(Company c);
    void addPhysicalPerson(PhysicalPerson p);
    void addAdvertiser(Advertiser a);
    void addAdvertisement(Advertisement a);
    void setAdvertiser();
    void setAdvertisement(string id,Advertisement a);
    vector<string> split(string text);
    Person getPersonById(string id);
};
#endif // PROJECTDBHEADER_H_INCLUDED
