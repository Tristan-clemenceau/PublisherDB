#include "ProjectDbHeader.h"
using namespace std;

/*CONSTRUCTOR*/
Person::Person(){
    Person::id ="Unset";
    Person::name="Unset";
}
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
