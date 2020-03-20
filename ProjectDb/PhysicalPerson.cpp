#include "ProjectDbHeader.h"
using namespace std;


/*CONSTRUCTOR*/
PhysicalPerson::PhysicalPerson(): Person(){
}
/*DESTRUCTOR*/
PhysicalPerson::~PhysicalPerson(){
}
/*GETTER*/
/*SETTER*/
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,PhysicalPerson &pp){
    out<<"[PhysicalPerson]\t Id : "<<pp.getId()<<"\t Name : "<<pp.getName()<<endl;
    return out;
}
