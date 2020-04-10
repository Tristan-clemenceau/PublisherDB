#include "ProjectDbHeader.h"
#include <fstream>
#include <string>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

/*CONSTRUCTOR*/
Publisher::Publisher(){

}
/*DESTRUCTOR*/
Publisher::~Publisher(){
}
/*GETTER*/
vector<Person> Publisher::getListPerson(){
    return Publisher::listPerson;
}
vector<Book> Publisher::getListBook(){
    return Publisher::listBook;
}
/*SETTER*/
/*OTHER*/
void Publisher::loadData(){
    cout<<"===Loading data==="<<endl;
    Publisher::loadDataPaperBook();
    Publisher::loadDataHardBackBook();
    Publisher::loadDataMagazine();
    Publisher::loadDataCompany();
    Publisher::loadDataPhysicalPerson();
    Publisher::loadDataAdvertiser();
    Publisher::setAdvertiser();
    Publisher::loadDataAdvertisement();
    cout<<"===Data loaded==="<<endl;
}
void Publisher::displayWeightBook(){
}
void Publisher::displayMagazine(){
}
void Publisher::displayHardback(){
}
void Publisher::displayAdvertiser(){
}
void Publisher::displayPaperbook(){
}
void Publisher::displayMagazineInfo(){
}
void Publisher::searchWord(string word){
}
void Publisher::addMagazine(Magazines mag){
    Publisher::listBook.push_back(mag);
}
void Publisher::removeMagazine(string id){
}
void Publisher::removeBook(string id){
}
void Publisher::loadDataPaperBook(){
    cout<<"Loading data PaperBook"<<endl;
    string myText;
    //Read file
    ifstream MyReadFile("Database//Book//PaperBook.txt");
    while(getline(MyReadFile, myText)) {
        //Split data
        vector<string> temp = Publisher::split(myText);
        //Creating Object
        PaperBook tempPaper;
        tempPaper.setId(temp[0]);
        tempPaper.setTitle(temp[1]);
        tempPaper.setNbPage(atoi(temp[2].c_str()));
        tempPaper.setBookContent(temp[3]);

        cout<<tempPaper;

        //adding object to vector
        Publisher::addBook(tempPaper);

    }
    //adding object to vector
    MyReadFile.close();
}
void Publisher::loadDataHardBackBook(){
    cout<<"Loading data HardBackBook"<<endl;
    string myText;
    //Read file
    ifstream MyReadFile("Database//Book//HarbackBook.txt");
    while(getline(MyReadFile, myText)) {
        //Split data
        vector<string> temp = Publisher::split(myText);
        //Creating Object
        HardBack tempHard;
        tempHard.setId(temp[0]);
        tempHard.setTitle(temp[1]);
        tempHard.setNbPage(atoi(temp[2].c_str()));
        tempHard.setBookContent(temp[3]);
        tempHard.setWeight(strtof(temp[4].c_str(),0));

        cout<<tempHard;

        //adding object to vector
        Publisher::addBook(tempHard);

    }
    //adding object to vector
    MyReadFile.close();
}
void Publisher::loadDataMagazine(){
    cout<<"Loading data Magazine"<<endl;
    string myText;
    //Read file
    ifstream MyReadFile("Database//Book//Magazine.txt");
    while(getline(MyReadFile, myText)) {
        //Split data
        vector<string> temp = Publisher::split(myText);
        //Creating Object
        Magazines tempMag;
        tempMag.setId(temp[0]);
        tempMag.setTitle(temp[1]);
        tempMag.setNbPage(atoi(temp[2].c_str()));
        tempMag.setBookContent(temp[3]);

        cout<<tempMag;

        //adding object to vector
        Publisher::addMagazine(tempMag);

    }
    //adding object to vector
    MyReadFile.close();
}
void Publisher::loadDataCompany(){
    cout<<"Loading data Company"<<endl;
    string myText;
    //Read file
    ifstream MyReadFile("Database//Person//Company.txt");
    while(getline(MyReadFile, myText)) {
        //Split data
        vector<string> temp = Publisher::split(myText);
        //Creating Object
        Company tempComp;
        tempComp.setId(temp[0]);
        tempComp.setName(temp[1]);

        cout<<tempComp;

        //adding object to vector
        Publisher::addPerson(tempComp);

    }
    //adding object to vector
    MyReadFile.close();
}
void Publisher::loadDataPhysicalPerson(){
    cout<<"Loading data Company"<<endl;
    string myText;
    //Read file
    ifstream MyReadFile("Database//Person//PhysicalPerson.txt");
    while(getline(MyReadFile, myText)) {
        //Split data
        vector<string> temp = Publisher::split(myText);
        //Creating Object
        PhysicalPerson tempphy;
        tempphy.setId(temp[0]);
        tempphy.setName(temp[1]);

        cout<<tempphy;

        //adding object to vector
        Publisher::addPerson(tempphy);

    }
    //adding object to vector
    MyReadFile.close();
}
void Publisher::loadDataAdvertiser(){
    cout<<"Loading data Advertiser"<<endl;
    string myText;
    //Read file
    ifstream MyReadFile("Database//Person//Advertiser.txt");
    while(getline(MyReadFile, myText)) {
        //Split data
        vector<string> temp = Publisher::split(myText);
        //Creating Object
        Advertiser tempAdver;
        Person p;
        tempAdver.setId(temp[0]);
        p.setId(temp[1]);
        tempAdver.setPerson(p);

        //adding object to vector
        Publisher::addAdvertiser(tempAdver);

    }
    //adding object to vector
    MyReadFile.close();
}
void Publisher::loadDataAdvertisement(){
    cout<<"Loading data Advertisement"<<endl;
    string myText;
    //Read file
    ifstream MyReadFile("Database//Book//Advertisement.txt");
    while(getline(MyReadFile, myText)) {
        //Split data
        vector<string> temp = Publisher::split(myText);
        //Creating Object
        Advertisement tempAdvert;
        tempAdvert.setTitle(temp[2]);
        tempAdvert.setAdvertiserId(temp[1]);
        Publisher::setAdvertisement(temp[0],tempAdvert);

        //adding object to vector
        Publisher::addAdvertisement(tempAdvert);

    }
    //adding object to vector
    MyReadFile.close();
}
vector<string> Publisher::split(string text){
    vector<string> res;
    string delimiter = ",";
    string token;
    size_t pos = 0;

    while ((pos = text.find(delimiter)) != string::npos) {
        token = text.substr(0, pos);
        res.push_back(token);
        text.erase(0, pos + delimiter.length());
    }
    res.push_back(text);
    return res;
}
void Publisher::addBook(Book b){
    Publisher::listBook.push_back(b);
}
void Publisher::addPerson(Person p){
    Publisher::listPerson.push_back(p);
}
void Publisher::addAdvertiser(Advertiser a){
    Publisher::listAdvertiser.push_back(a);
}
void Publisher::addAdvertisement(Advertisement a){
    Publisher::listAdvertisement.push_back(a);
}

void Publisher::setAdvertiser(){
    for(int i = 0; i<Publisher::listAdvertiser.size();i++){
            Publisher::listAdvertiser[i].setPerson(Publisher::test(Publisher::listAdvertiser[i].getPerson().getId()));
            cout<<Publisher::listAdvertiser[i];
    }
}

Person Publisher::test(string id){
    for(int i = 0;i < Publisher::listPerson.size();i++){
        if(Publisher::listPerson[i].getId() == id){
            return Publisher::listPerson[i];
        }
    }
}

void Publisher::setAdvertisement(string id,Advertisement a){
    for(int i = 0;i < Publisher::listBook.size();i++){
        char first = Publisher::listBook[i].getId()[0];
        char second = Publisher::listBook[i].getId()[1];
        if(first == 'M' && second == 'G' && Publisher::listBook[i].getId() == id){
            cout<<Publisher::listBook[i];
            //canger les vecteurs
        }
    }
}
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,Publisher &p){
    out<<"[Publisher]\t NbBook : "<<p.getListBook().size()<<"\t NbPerson : "<<p.getListPerson().size()<<endl;
    return out;
}
