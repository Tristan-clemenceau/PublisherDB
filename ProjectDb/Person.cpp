#include "ProjectDbHeader.h"
using namespace std;

/*CONSTRUCTOR*/
Person::Person(){
    Person::id ="Unset";
    Person::name="Unset";
}
/*DESTRUCTOR*/
Person::~Person(){
}
/*GETTER*/
string Person::getId(){
    return Person::id;
}
string Person::getName(){
    return Person::name;
}
/*SETTER*/
void Person::setId(string Person_id){
    Person::id = Person_id;
}
void Person::setName(string Person_name){
    Person::name = Person_name;
}
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,const Person &p){
    out<<"[Person]\t Id : "<<p.id<<"\t Name : "<<p.name<<endl;
    return out;
}
