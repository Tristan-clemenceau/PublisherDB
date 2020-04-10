#include "ProjectDbHeader.h"
#include <list>
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
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,Publisher &p){
    out<<"[Publisher]\t NbBook : "<<p.getListBook().size()<<"\t NbPerson : "<<p.getListPerson().size()<<endl;
    return out;
}
