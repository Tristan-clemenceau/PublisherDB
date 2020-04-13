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
int Publisher::getNbPerson(){
    return (Publisher::listCompany.size() + Publisher::listPhysicalPerson.size());
}
int Publisher::getNbBook(){
    return (Publisher::listHardBack.size() + Publisher::listPaperBackBook.size() + Publisher::listMagazines.size());
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
    cout<<"===Display Sum Hardback Book==="<<endl;
    float sum=0;
    for(int i = 0; i< Publisher::listHardBack.size();i++){
       sum+=Publisher::listHardBack[i].getWeight();
    }
    cout<<"Nb HardBack book : "<<Publisher::listHardBack.size()<<"\t Total Weight : "<<sum<<" lbs"<<endl;
    cout<<"===End Sum Hardback Book==="<<endl;
}
void Publisher::displayMagazine(){
    cout<<"===Display All Magazines==="<<endl;
    for(int i = 0; i< Publisher::listMagazines.size();i++){
        cout<<Publisher::listMagazines[i];
    }
    cout<<"===End Display Magazines==="<<endl;
}
void Publisher::displayHardback(){
    cout<<"===Display All HardBack==="<<endl;
    for(int i = 0; i< Publisher::listHardBack.size();i++){
        cout<<Publisher::listHardBack[i];
    }
    cout<<"===End Display HardBack==="<<endl;
}
void Publisher::displayAdvertisement(){
    cout<<"===Display All Advertisement==="<<endl;
    /*GET CHOICE*/
    Magazines temp;
    temp = Publisher::getChoiceMagazines();
    /*Display data*/
    cout<<temp;
    cout<<"===End Display Advertisement==="<<endl;
}
void Publisher::displayPaperBackbook(){
    cout<<"===Display All PaperBack==="<<endl;
    for(int i = 0; i< Publisher::listPaperBackBook.size();i++){
        cout<<Publisher::listPaperBackBook[i];
    }
    cout<<"===End Display PaperBack==="<<endl;
}
void Publisher::displayAdvertiser(){
    cout<<"===Display All Advertiser==="<<endl;
    for(int i = 0; i< Publisher::listAdvertiser.size();i++){
        cout<<Publisher::listAdvertiser[i];
    }
    cout<<"===End Display Advertiser==="<<endl;
}
void Publisher::searchWord(string word){
}
void Publisher::addMagazine(Magazines mag){
    Publisher::listMagazines.push_back(mag);
}
void userAddMagazine(){
    cout<<"===Add Magazine==="<<endl;

    cout<<"===End Add Magazine==="<<endl;
}
void userRemoveBook(){
    cout<<"===Remove Book/Magazine==="<<endl;

    cout<<"===End Remove Book/Magazine==="<<endl;
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
        PaperBack tempPaper;
        tempPaper.setId(temp[0]);
        tempPaper.setTitle(temp[1]);
        tempPaper.setNbPage(atoi(temp[2].c_str()));
        tempPaper.setBookContent(temp[3]);

        //cout<<tempPaper;

        //adding object to vector
        Publisher::addPaperBackBook(tempPaper);

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

        //cout<<tempHard;

        //adding object to vector
        Publisher::addHarback(tempHard);

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

        //adding object to vector
        Publisher::addCompany(tempComp);

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

        //adding object to vector
        Publisher::addPhysicalPerson(tempphy);

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
/*Update*/
void Publisher::addPaperBackBook(PaperBack p){
    Publisher::listPaperBackBook.push_back(p);
}
void Publisher::addHarback(HardBack h){
    Publisher::listHardBack.push_back(h);
}
void Publisher::addCompany(Company c){
    Publisher:listCompany.push_back(c);
}
void Publisher::addPhysicalPerson(PhysicalPerson p){
    Publisher::listPhysicalPerson.push_back(p);
}
void Publisher::addAdvertiser(Advertiser a){
    Publisher::listAdvertiser.push_back(a);
}
void Publisher::addAdvertisement(Advertisement a){
    Publisher::listAdvertisement.push_back(a);
}

void Publisher::setAdvertiser(){
    for(int i = 0; i<Publisher::listAdvertiser.size();i++){
            Publisher::listAdvertiser[i].setPerson(Publisher::getPersonById(Publisher::listAdvertiser[i].getPerson().getId()));
    }
}

Person Publisher::getPersonById(string id){
    char first = id[0];
    char second = id[1];
    if(first == 'C' && second == 'O'){//Company
        for(int i = 0;i < Publisher::listCompany.size();i++){
            if(Publisher::listCompany[i].getId() == id){
                return Publisher::listCompany[i];
            }
        }
    }else if(first == 'P' && second == 'P'){//PhysicalPerson
        for(int i = 0;i < Publisher::listPhysicalPerson.size();i++){
            if(Publisher::listPhysicalPerson[i].getId() == id){
                return Publisher::listPhysicalPerson[i];
            }
        }
    }else{
        cout<<"Erreur cet identifiant n'est pas possible"<<endl;
    }
}

void Publisher::setAdvertisement(string id,Advertisement a){
    for(int i = 0;i < Publisher::listMagazines.size();i++){
            if(Publisher::listMagazines[i].getId() == id){
                Publisher::listMagazines[i].addElement(a);
            }
    }
}
Magazines Publisher::getChoiceMagazines(){
    vector<string> magazineId;

    cout<<"=[MAGAZINES ID]="<<endl;
    //DISPLAY ALL ID
    for(int i = 0; i< Publisher::listMagazines.size();i++){
        cout<<Publisher::listMagazines[i].getId()<<" , ";
        magazineId.push_back(Publisher::listMagazines[i].getId());
    }
    cout<<"\n=[MAGAZINES ID]="<<endl;

    /*CHOICE*/
    cout<<"Please enter a Magazine ID "<<endl;

    string choix;
    cin>>choix;
   while(Publisher::notIn(choix,magazineId) != true){
        cout<<"Please enter a Magazine ID "<<endl;
        cin>>choix;
    }
    int cpt;
    for(int i = 0; i< Publisher::listMagazines.size();i++){
        if(choix == Publisher::listMagazines[i].getId()){
            cpt = i;
        }
    }
    return Publisher::listMagazines[cpt];
}
bool Publisher::notIn(string choix, vector<string> magId){
    bool ok = false;

    for(int i = 0; i < magId.size();i++){
        if(choix == magId[i]){
            ok =true;
        }
    }
    return ok;
}
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,Publisher &p){
    out<<"[Publisher]\t NbBook : "<<p.getNbBook()<<"\t NbPerson : "<<p.getNbPerson()<<endl;
    return out;
}
