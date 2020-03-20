#include "ProjectDbHeader.h"
using namespace std;


/*CONSTRUCTOR*/
Advertiser::Advertiser(){
    Person p;
    Advertiser::id ="Unset";
    Advertiser::person = p;
}
/*DESTRUCTOR*/
Advertiser::~Advertiser(){
}
/*GETTER*/
Person Advertiser::getPerson(){
    return Advertiser::person;
}
string Advertiser::getId(){
    return Advertiser::id;
}
/*SETTER*/
void Advertiser::setPerson(Person Advi_person){
    Advertiser::person = Advi_person;
}
void Advertiser::setId(string advi_id){
    Advertiser::id = advi_id;
}
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,const Advertiser &a){
    out<<"[Advertiser]\t Id : "<<a.id<<"\t Advertiser : "<<a.person<<endl;
    return out;
}
