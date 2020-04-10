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
       // tempPaper.display();
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

       // tempPaper.display();
        cout<<tempHard;

        //adding object to vector
        Publisher::addBook(tempHard);

    }
    //adding object to vector
    MyReadFile.close();
}
void Publisher::loadDataMagazine(){
}
void Publisher::loadDataCompany(){
}
void Publisher::loadDataPhysicalPerson(){
}
void Publisher::loadDataAdvertiser(){
}
void Publisher::loadDataAdvertisement(){
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
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,Publisher &p){
    out<<"[Publisher]\t NbBook : "<<p.getListBook().size()<<"\t NbPerson : "<<p.getListPerson().size()<<endl;
    return out;
}
