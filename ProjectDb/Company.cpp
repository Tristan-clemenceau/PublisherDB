#include "ProjectDbHeader.h"
using namespace std;


/*CONSTRUCTOR*/
Company::Company(): Person(){
}
/*DESTRUCTOR*/
Company::~Company(){
}
/*GETTER*/
/*SETTER*/
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,Company &c){
    out<<"[Company]\t Id : "<<c.getId()<<"\t Name : "<<c.getName()<<endl;
    return out;
}
