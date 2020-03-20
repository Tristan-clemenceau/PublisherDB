#include "ProjectDbHeader.h"
using namespace std;

Book::Book(){
    Book::id = "Unset";
    Book::title = "Unset";
    Book::nbPage= 0;
    Book::bookContent ="Unset";
}
ostream& operator<<(ostream &out,const Book &b){
    out<<"[Book]\t Title : "<<b.title<<"\t Id : "<<b.id<<endl;
    return out;
}
