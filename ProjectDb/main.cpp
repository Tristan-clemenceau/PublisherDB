#include <iostream>
#include "ProjectDbHeader.h"
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    /*Book b;
    PaperBook pb;
    HardBack hb;
    Magazines mg;
    Person pp;
    Company c;
    PhysicalPerson phy;
    Advertiser adv;
    Advertisement adp;*/
    Publisher pub;

   /* cout<<b;
    cout<<pp;
    cout<<c;
    cout<<phy;
    cout<<adv;
    cout<<adp;
    cout<<pb;
    cout<<hb;
    cout<<mg;
    cout<<pub;*/

    pub.loadData();
    pub.displayMagazine();
    pub.displayPaperBackbook();
    pub.displayHardback();
    cout<<pub;

    return 0;
}
