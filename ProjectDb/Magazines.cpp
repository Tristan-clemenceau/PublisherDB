#include "ProjectDbHeader.h"
using namespace std;

/*CONSTRUCTOR*/
Magazines::Magazines(): Book(){

}
/*DESTRUCTOR*/
Magazines::~Magazines(){
}
/*GETTER*/
vector<Advertisement> Magazines::getArrArdv(){
    return Magazines::arrArdv;
}
/*SETTER*/
/*OTHER*/
//Add del insert find
void Magazines::addElement(Advertisement a){
    Magazines::arrArdv.push_back(a);
}
void Magazines::delElement(){
}
void Magazines::findElement(){

}
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,Magazines &m){
    out<<"[Magazines]\t Title : "<<m.getTitle()<<"\t Id : "<<m.getId()<<"\t nbPage : "<<m.getNbPage()<<"\t nbAdvertisement : "<<m.getArrArdv().size()<<"\t nbPublisher : "<<m.getArrArdv().size()<<endl;
    return out;
}
