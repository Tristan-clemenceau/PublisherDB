#include "ProjectDbHeader.h"
using namespace std;

/*CONSTRUCTOR*/
PaperBack::PaperBack(): Book(){

}
/*DESTRUCTOR*/
PaperBack::~PaperBack(){
    //cout<<"Deleting paperBook item"<<endl;
}
/*GETTER*/
/*SETTER*/
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,PaperBack &b){
    out<<"[PaperBack]\t Title : "<<b.getTitle()<<"\t Id : "<<b.getId()<<"\t nbPage : "<<b.getNbPage()<<endl;
    return out;
}
