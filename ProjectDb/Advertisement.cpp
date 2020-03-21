#include "ProjectDbHeader.h"
using namespace std;

/*CONSTRUCTOR*/
Advertisement::Advertisement(){
    Advertisement::title = "Unset";
    Advertisement::advertiserId = "Unset";
}
/*DESTRUCTOR*/
Advertisement::~Advertisement(){

}
/*GETTER*/
string Advertisement::getTitle(){
    return Advertisement::title;
}
string Advertisement::getAdvertiserId(){
    return Advertisement::advertiserId;
}
/*SETTER*/
void Advertisement::setTitle(string advertisementTitle){
    Advertisement::title = advertisementTitle;
}
void Advertisement::setAdvertiserId(string id){
    Advertisement::advertiserId = id;
}
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,const Advertisement &a){
    out<<"[Advertisement]\t Id Advertiser : "<<a.advertiserId<<"\t Title : "<<a.title<<endl;
    return out;
}
