#include "ProjectDbHeader.h"
using namespace std;

/*CONSTRUCTOR*/
Publisher::Publisher(){

}
/*DESTRUCTOR*/
Publisher::~Publisher(){
}
/*GETTER*/
list<Person> Publisher::getListPerson(){
    return Publisher::listPerson;
}
list<Book> Publisher::getListBook(){
    return Publisher::listBook;
}
/*SETTER*/
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,Publisher &p){
    out<<"[Publisher]\t NbBook : "<<p.getListBook().size()<<"\t NbPerson : "<<p.getListPerson().size()<<endl;
    return out;
}
