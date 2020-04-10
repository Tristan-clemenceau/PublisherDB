#include "ProjectDbHeader.h"
using namespace std;

/*CONSTRUCTOR*/
PaperBook::PaperBook(): Book(){

}
/*DESTRUCTOR*/
PaperBook::~PaperBook(){
    cout<<"Deleting paperBook item"<<endl;
}
/*GETTER*/
/*SETTER*/
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,PaperBook &b){
    out<<"[PaperBook]\t Title : "<<b.getTitle()<<"\t Id : "<<b.getId()<<"\t nbPage : "<<b.getNbPage()<<endl;
    return out;
}
