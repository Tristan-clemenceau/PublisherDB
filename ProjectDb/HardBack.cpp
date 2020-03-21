#include "ProjectDbHeader.h"
using namespace std;

/*CONSTRUCTOR*/
HardBack::HardBack(): Book(){
    HardBack::weight = 0;

}
/*DESTRUCTOR*/
HardBack::~HardBack(){
}
/*GETTER*/
float HardBack::getWeight(){
    return HardBack::weight;
}
/*SETTER*/
void HardBack::setWeight(float amount){
    HardBack::weight = amount;
}
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,HardBack &hb){
    out<<"[HardBack]\t Title : "<<hb.getTitle()<<"\t Id : "<<hb.getId()<<"\t nbPage : "<<hb.getNbPage()<<"\t Weight : "<<hb.weight<<endl;
    return out;
}
