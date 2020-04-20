#include <iostream>
#include "ProjectDbHeader.h"
#include <fstream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

void displayInstruction(){
    cout<<"Please choose a number on the menu bellow"<<endl;
    cout<<"1.List all magazines\n2.List all paperback books\n3.List all hardback books\n4.List advertiser\n5.List advertisements and advertiser for a magazine\n6.Remove a Book / Magazine by ID\n7.Add a magazine\n8.Search for a word\n9 Sum of the weight of all hardback books"<<endl;
}

void displayEndInformation(){
    cout<<"Would you like to continue ? Yes = y No = n"<<endl;
}

void menuSystem(){
    /*Creation PUBLISHER*/
    Publisher pub;
    /*Loading base from DATABASE REPO*/
    pub.loadData();
    /*DISPLAY CHOICE*/
    displayInstruction();

    bool stop = false;
    string choice;
    cin>>choice;
    regex const expression("[1-9]");
    regex const expressionEnd("y|n");

    while(!stop){
        while(!regex_match(choice,expression)){/*MENU CHOICE*/
            displayInstruction();
            cin>>choice;
        }

        switch(atoi(choice.c_str())){
        case 1 :
            pub.displayMagazine();
            break;
        case 2 :
            pub.displayPaperBackbook();
            break;
        case 3 :
            pub.displayHardback();
            break;
        case 4 :
            pub.displayAdvertiser();
            break;
        case 5 :
            pub.displayAdvertisement();
            break;
        case 6 :
            pub.userRemoveBook();
            break;
        case 7 :
            pub.userAddMagazine();
            break;
        case 8 :
            pub.searchWord();
            break;
        case 9 :
            pub.displayWeightBook();
            break;
        }


        displayEndInformation();
        cin>>choice;
        while(!regex_match(choice,expressionEnd)){/*END CHOICE*/
            displayEndInformation();
            cin>>choice;
        }
        if(choice == "n"){
            stop = true;
        }
    }



}

int main()
{
    menuSystem();
    return 0;
}
