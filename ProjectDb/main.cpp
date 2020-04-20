#include <iostream>
#include "ProjectDbHeader.h"
#include <fstream>
#include <string>
#include <vector>

using namespace std;



int main()
{
    Publisher pub;

    pub.loadData();
    cout<<pub;
    pub.displayMagazine();
    pub.displayPaperBackbook();
    pub.displayHardback();
    pub.displayAdvertiser();
    pub.displayAdvertisement();
    pub.displayWeightBook();
    pub.userRemoveBook();
    //pub.displayMagazine();
    pub.userAddMagazine();
    pub.displayMagazine();
    pub.searchWord();

    cout<<pub;

    return 0;
}
