#include "ProjectDbHeader.h"
using namespace std;

/*CONSTRUCTOR*/
Book::Book(){
    Book::id = "Unset";
    Book::title = "Unset";
    Book::nbPage= 0;
    Book::bookContent ="Unset";
}
/*DESTRUCTOR*/
Book::~Book(){
    cout<<"ok";
}
/*GETTER*/
string Book::getId(){
	return Book::id;
}
string Book::getTitle(){
    return Book::title;
}
int Book::getNbPage(){
    return Book::nbPage;
}
string Book::getBookContent(){
    return Book::bookContent;
}
/*SETTER*/
void Book::setId(string Book_id){
    Book::id = Book_id;
}
void Book::setTitle(string Book_title){
    Book::title = Book_title;
}
void Book::setNbPage(int Book_nbPage){
    Book::nbPage = Book_nbPage;
}
void Book::setBookContent(string Book_bookContent){
    Book::bookContent = Book_bookContent;
}
/*OTHER*/
/*OBJECT METHOD*/
ostream& operator<<(ostream &out,const Book &b){
    out<<"[Book]\t Title : "<<b.title<<"\t Id : "<<b.id<<"\t nbPage : "<<b.nbPage<<endl;
    return out;
}
