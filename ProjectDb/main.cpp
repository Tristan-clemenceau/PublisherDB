#include <iostream>
#include "ProjectDbHeader.h"
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string test = "data1,data2,data3 suite yo";
    vector<string>trol;

    Book b;
    PaperBook pb;
    HardBack hb;
    Magazines mg;
    Person pp;
    Company c;
    PhysicalPerson phy;
    Advertiser adv;
    Advertisement adp;
    Publisher pub;

    cout<<b;
    cout<<pp;
    cout<<c;
    cout<<phy;
    cout<<adv;
    cout<<adp;
    cout<<pb;
    cout<<hb;
    cout<<mg;
    cout<<pub;

    string delimiter = ",";

    size_t pos = 0;
    string token;
    while ((pos = test.find(delimiter)) != string::npos) {
        token = test.substr(0, pos);
        trol.push_back(token);
        cout<<token<<endl;
        test.erase(0, pos + delimiter.length());
    }
    cout<<test<<endl;
    trol.push_back(test);

    for(int i = 0; i<trol.capacity();i++){
        cout<<trol[i][2]<<endl;
    }

    return 0;
}
